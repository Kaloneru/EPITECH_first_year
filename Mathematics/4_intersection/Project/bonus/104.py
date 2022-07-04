import math
#exercice01
def get_delta(a, b, c):
    #print(a, b, c)
    discri = b**2 - 4*a*c
    #print(discri)
    return discri

def calculus(a, b, c, value):
    delta = get_delta(a, b, c)
    if delta > 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b + math.sqrt(delta)) / (2 * a)
        print("(", int(value[1]) + (x1 * int(value[4])), ", ", int(value[2]) + (x1 * int(value[5])),  ", ", int(value[2]) + (x1 * int(value[5])), ")")
        print("(", int(value[1]) + (x2 * int(value[4])), ", ", int(value[2]) + (x2 * int(value[5])),  ", ", int(value[2]) + (x2 * int(value[5])), ")")
    if delta == 0:
         x0 = -b / 2 * a
         print("(", int(value[1]) + (x0 * int(value[4])), ", ", int(value[2]) + (x0 * int(value[5])),  ", ", int(value[2]) + (x0 * int(value[5])), ")")
    if delta < 0:
        print("No intersection point.")


#exercice
def sphere(value):
    a = int(value[4])**2 + int(value[5])**2 + int(value[6])**2
    b = (int(value[1]) * (int(value[4])**2)) + (int(value[2]) * (int(value[5])**2)) + (int(value[3]) * (int(value[6])**2))
    c = int(value[1])**2 + int(value[2])**2 + int(value[3])**2 - int(value[7])**2

    calculus(a, b, c, value)

def cylinder(value):
    a = int(value[4])**2 + int(value[5])**2
    b = int(value[1]) * int(value[4]) + int(value[2]) * int(value[5]) + int(value[3]) * int(value[6])
    c =  int(value[1])**2 +  int(value[2])**2 +  int(value[3])**2 +  int(value[7])

    calculus(a, b, c, value)

def cone(value):
    angle = (int(value[7])*math.pi) / 180
    a = int(value[4])**2 + int( +int(value[5])**2 - value[6])**2 / angle**2
    b = (int(value[1]) * int(value[4]) * 2) + (int(value[2]) * int(value[5])*2) + (int(value[3]) * int(value[6]) * 2) / angle**2
    c = int(value[1])**2 + int( + int(value[2])**2 - value[3])**2 / angle**2

    calculus(a, b, c, value)

#gestion d erreur : regarder si la premiere caleur c 1 2 ou 3 sinon pas bon
#gste : regarder si y a bien 8 valeurs
def all():
    print(4**2)
    value = input("enter 8 values : ")
    value = value.split(" ")
    #print(value[0])
    if int(value[0]) == 1:
        print("Sphere of radius ", value[7])
    elif int(value[0]) == 2:
        print("Cylinder of radius ", value[7])
    elif int(value[0] == 3):
        print("Cone with a ", value[7], " degree angle/n")
    print("Line passing through the point (",value[1], ",", value[2], ",", value[3],") and parallel to the vector (", value[4], ", ", value[5], ", ", value[6], ")")
    if int(value[0]) == 1:
        sphere(value)
    elif int(value[0]) == 2:
        cylinder(value)
    elif int(value[0] == 3):
        cone(value)
all()