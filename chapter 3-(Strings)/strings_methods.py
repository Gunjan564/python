#strings are immutable
a="v!!!GunJan!! !!!!!!!!!!! GunJan!!!!"
print(len(a))
print(a.upper())
print(a.lower())
print(a.rstrip("!"))
print(a.lstrip("!"))
print(a.replace("!","#"))
print(a.split(" "))
print(a.capitalize())
print(a.center(100),end="?")
print("\n")
print(a.count("!"))
print(a.endswith("!!!"))
print(a.endswith("GunJan"))
print(a.endswith("an,",5,10))
print(a.find("GunJan"))#return -1 if not present
print(a.index("GunJan"))#throws error if not present
print(a.isalnum())
print(a.isprintable())
print(a.islower())
print(a.isspace())
print(a.istitle())