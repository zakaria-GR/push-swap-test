def ft_seed_inventory(seed, count, typef):
    packets = "packets available"
    grams = "grams total"
    area = "covers {count} square meters"
    if typef == "packets":
        print(seed, "seeds: ", count, packets)
    else if typef == "grams":
            print(seed, "seeds: ", count, grams)
    else if typef == "area":
        print(seed, "seeds: ", area)
