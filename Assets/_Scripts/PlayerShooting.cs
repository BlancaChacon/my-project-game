using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShooting : MonoBehaviour
{
    public GameObject shootingPoint;
    
    public ParticleSystem fireEffect;

    public AudioSource shootSound;


    private Animator _animator;

    public int bulletsAmount;

    public float fireRate = 0.5f;
    private float lastShootTime;


    private void Awake()
    {
        _animator = GetComponent<Animator>();
    }


    // Update is called once per frame
    void Update()
    {
        if(Input.GetKey(KeyCode.Mouse0) && Time.timeScale > 0)
        {
            
            //_animator.SetTrigger("Shot Bullet");
            _animator.SetBool("Shot Bullet Bool", true);
            if(bulletsAmount > 0)
            {
                var timeSinceLastShoot = Time.time - lastShootTime;
                if (timeSinceLastShoot < fireRate)
                {
                    return;
                }
                lastShootTime = Time.time;

                Invoke(methodName:"FireBullet", time: 0.25f);
            }
            
        }
        else
        {
            _animator.SetBool("Shot Bullet Bool", false);
        }
    }


    void FireBullet()
    {
        GameObject bullet = ObjectPool.SharedInstance.GetFirstPooledObjetct();
        bullet.layer = LayerMask.NameToLayer("Player Bullet");
        bullet.transform.position = shootingPoint.transform.position;
        bullet.transform.rotation = shootingPoint.  transform.rotation;
        bullet.SetActive(true);

        
        
        
        
        fireEffect.Play();


        Instantiate(shootSound, transform.position, transform.rotation).GetComponent<AudioSource>().Play();
        //shootSound.Play();

        
        bulletsAmount--;
        if (bulletsAmount<0)
        {
            bulletsAmount = 0;
        }
    }


}
