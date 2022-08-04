from machine import UART, Pin
import time

uart1 = UART(1, baudrate=9600, tx=Pin(8), rx=Pin(9))

txData = b'Hello hell\n\r'

while 1:
    uart1.write(txData)
    time.sleep(1.0)