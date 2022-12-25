import turtle as t
from turtle import *
import colorsys
t.bgcolor('black')
t.setup(900,500)
t.title("CodeThatCanRun window")
t.tracer(5)
t.pensize(2) 
n=36
h=0.07
t.bgcolor("black")
t.pencolor("darkviolet")
for j in range(40):
    for i in range(15):
        c = colorsys.hsv_to_rgb(h, 1,0.6)
        h += (1 / n)
        t.pencolor(c)
        t.fd(45+i)
        t.circle(-102, 20)
        t.circle(-90, 40,90)
        t.right(45-1)
t.done()        
