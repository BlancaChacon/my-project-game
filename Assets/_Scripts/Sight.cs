using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sight : MonoBehaviour
{
    public float distance;
    public float angle;

    public LayerMask targetLayers;
    public LayerMask obstacleLeyers;

    public Collider detectedTarget;

    private Collider[] colliders;

    private void Update()
    {
        // if (Physics.OverlapSphereNonAlloc(transform.position, distance, this.colliders, targetLayer)==0)
        // {
        //     return;
        // }
        
        colliders = Physics.OverlapSphere(transform.position, distance, targetLayers);

        detectedTarget = null;

        foreach (Collider collider in colliders)
        {
            Vector3 directionToCollider = collider.bounds.center - transform.position;
            directionToCollider = Vector3.Normalize(directionToCollider);

            //Ángelo que forma el vector vision con el vector objetivo 
            float angleToCollider = Vector3.Angle(transform.forward, directionToCollider);

            //Si el ángulo es menor que el de vision 
            if (angleToCollider < angle)
            {
                //Comprobamos que en la linea de vision enemigo -> objetico no haya obstaculos
                if (!Physics.Linecast(transform.position, collider.bounds.center, out RaycastHit hit, obstacleLeyers))
                {
                    Debug.DrawLine(transform.position, collider.bounds.center, Color.green);
                    //guardamos la referencia del objetivo detectado
                    detectedTarget = collider;
                    break;
                }
                else
                {
                    Debug.DrawLine(transform.position, hit.point, Color.red);
                }
            }
        }
    }
    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, distance);

        Gizmos.color = Color.magenta;
        Vector3 rightDir = Quaternion.Euler(0 ,angle,0)*transform.forward;
        Gizmos.DrawRay(transform.position, rightDir*distance);

        Vector3 lefttDir = Quaternion.Euler(0 ,-angle,0)*transform.forward;
        Gizmos.DrawRay(transform.position, lefttDir*distance);
    }
}
