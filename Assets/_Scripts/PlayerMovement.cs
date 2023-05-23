using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[RequireComponent(typeof(Rigidbody))]

public class PlayerMovement : MonoBehaviour
{
    // fuerza = masa * aceleracion
    [Tooltip("Fuerza de Movimiento del Personaje en N/s")]
    [Range(0, 1000)]
    public float speed;

    [Tooltip("Fuerza de Rotación del Personaje en N/seg")]
    [Range(0, 360)]
    public float rotationSpeed;

    private Rigidbody _rb;

    private Animator _animator;




    void Start()
    {
        Cursor.visible = false;
        Cursor.lockState = CursorLockMode.Locked;

        _rb = GetComponent<Rigidbody>();
        _animator = GetComponent<Animator>();
    }



    void Update()
    { 
        // incremento del espacio = Velocidad * tiempo 
        float space = speed * Time.deltaTime;

        float horizontal = Input.GetAxis("Horizontal");   // -1 a 1
        float vertical = Input.GetAxis("Vertical");       // -1 a 1

        Vector3 dir = new Vector3(x:horizontal,y:0,z:vertical);
        //transform.Translate(translation:dir.normalized*space);
        // FUERZA DE TRANSLACION 

        _rb.AddRelativeForce(dir.normalized*space);

        float angle = rotationSpeed * Time.deltaTime;
        float mouseX = Input.GetAxis("Mouse X");
        //transform.Rotate(xAngle:0,yAngle:mouseX*angle,zAngle:0);
        //FUERZA DE ROTACION -> TORQUE 
        _rb.AddRelativeTorque(x:0,y:mouseX*angle,z:0);

        _animator.SetFloat("Velocity", _rb.velocity.magnitude);
        /*
        TODO  ajustar animaciones si quieren usarse para caminar y correr 
        _animator.SetFloat("Velocity", _rb.velocity.magnitude);
        _animator.SetFloat("Move X", horizontal);
        _animator.SetFloat("Move Y", vertical);

        if (Input.GetKey(KeyCode.LeftShift))
        {
            _animator.SetFloat("Velocity", _rb.velocity.magnitude);
        }
        else
        {
            if (Mathf.Abs(horizontal)<0.01f && Mathf.Abs(vertical)<0.01f)
            {
                _animator.SetFloat("Velocity", 0);
            }
            else
            {
                _animator.SetFloat("Velocity", 0.15f);
            }
            
        }








        /* otra forma de hacer lo mismo 

        if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.UpArrow))
        {
            this.transform.Translate(x:0,y:0,z:space);
        }
                if (Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.DownArrow))
        {
            this.transform.Translate(x:0,y:0,z:-space);
        }
                if (Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.LeftArrow))
        {
            this.transform.Translate(x:-space,y:0,z:0);
        }
                if (Input.GetKey(KeyCode.D) || Input.GetKey(KeyCode.RightArrow))
        
            this.transform.Translate(x:space,y:0,z:0);
        }
        */
    }
}