from gpiozero import DistanceSensor
from gpiozero import TonalBuzzer, LED
from gpiozero.tones import Tone
from gpiozero import AngularServo
from mfrc522 import SimpleMFRC522
from time import sleep

sensor = DistanceSensor(21, 20)
lst = [242.32, 352.34, 810.2]
lst2 = [242.32, 242.32, 242.32]
blue = LED(14)
red = LED(12)
buzzer = TonalBuzzer(17)
servo = AngularServo(21, min_angle=0, max_angle=90)
servo.angle = 0
cnt = 0
no = 0
flag = 0

while True:
    d = int(sen.distance * 100)
    if d < 10 and flag == 0:
        flag = 1
        blue.on()
        red.off()

    if d > 10 and flag == 1:
        blue.off()
        red.off()
        flag = 0

        id = SimpleMFRC522().read()[0]
        print(id)
        if id == 558899731389:
            for i in range(3):
                buzzer.play(lst[i])
                sleep(0.2)
            buzzer.stop()
            servo.angle = 90
            sleep(1)
            servo.angle = 0
            cnt += 1

        else:
            no += 1
            red.on()
            if no == 3:
                for i in range(3):
                    buzzer.play(lst[i])
                    sleep(0.2)
                buzzer.stop()
                no = 0
            sleep(1)
            red.off()

    print(d, 'cm', cnt)
    sleep(0.1)
