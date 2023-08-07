using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;



public class GameOver : MonoBehaviour
{
    public Text actualScore, actualTime, bestScore, bestTime;
    
    public bool playerHasWon;

    // Start is called before the first frame update
    void Start()
    {
            Cursor.visible = true;
            Cursor.lockState = CursorLockMode.None;


            if (playerHasWon)
            {
                int score = PlayerPrefs.GetInt("Last Score");
                float time =  PlayerPrefs.GetFloat("Last Time");
                
                actualScore.text = string.Format("Score: {0}", score);
                actualTime.text = string.Format("Time: {0}", time);
                bestScore.text = "Best: " + PlayerPrefs.GetInt("High Score");
                bestTime.text = "Best: " + PlayerPrefs.GetFloat("Low Time");

                print($"La partida ha terminado con {score} puntos en {time} segundos");
            }
        
    }

    public void ReloadLevel()
    {
        SceneManager.LoadScene("Level 1");
    }

}
