import pyautogui 
from time import sleep
n = int(input())
sleep(3)
for i in range(1, n+1):
    text = "#" * i
    pyautogui.typewrite(text + "\n", interval=0.1)