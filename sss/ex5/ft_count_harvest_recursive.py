def test()

harvest_days = int(input("Days until harvest: "))
i = 0
if i < harvest_days:
    test(i + 1)
print("Harvest time!")