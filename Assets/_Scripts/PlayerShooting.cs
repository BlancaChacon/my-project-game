using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerShooting : MonoBehaviour
{
    private Animator _animator;

    public int bulletsAmount;

    public Weapon weapon;

    private void Awake()
    {
        _animator = GetComponent<Animator>();
    }

    void Update()
    {
        if (Input.GetKey(KeyCode.Mouse0) && Time.timeScale > 0)
        {
            _animator.SetBool("Shot Bullet Bool", true);

            if (bulletsAmount> 0 && weapon.ShootBullet(layerName:"Player Bullet", 0.25f))
            {
                bulletsAmount--;
                    if (bulletsAmount<0)
                        {
                            bulletsAmount = 0;
                        }
            }
        }else
        {
            _animator.SetBool("Shot Bullet Bool", false);
        }
    }
}
