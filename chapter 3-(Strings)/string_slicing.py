weapon="Katana"
#       012345
weaponLen=len(weapon)
print(weaponLen)#output=         6
print(weapon[0:6])#output=       Katana
print(weapon[1:3])#output=       at 
print(weapon[4:5])#output=       n
print(weapon[:6])#output=        Katana
print(weapon[0:-2])#output=      Kata
print(weapon[:-2])#output=       Kata
print(weapon[-1:len(weapon)-2])
print(weapon[-6:-2])
if "at" in weapon:
    print("Yes")
else:
    print("No")