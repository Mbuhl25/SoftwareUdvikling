upper = "DDBUULLFL"
right = "UFUDRFFUF"
front = "BUFBFBDBR"
down = "RLUFDLLUD"
left = "BRDDLRURB"
back = "RRLDBLRBF"
scrambled = upper + right + front + down + left + back
print(scrambled)


totalU = 0
totalR = 0
totalF = 0
totalD = 0
totalL = 0
totalB = 0
for letter in scrambled:
    if letter == "U":
        totalU += 1
    if letter == "R":
        totalR += 1
    if letter == "F":
        totalF += 1
    if letter == "D":
        totalD += 1
    if letter == "L":
        totalL += 1
    if letter == "B":
        totalB += 1
print("total U = ", totalU)
print("total R = ", totalR)
print("total F = ", totalF)
print("total D = ", totalD)
print("total L = ", totalL)
print("total B = ", totalB)

import kociemba
print(kociemba.solve(scrambled))