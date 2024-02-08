def nan_expand(n):
    if n == 0:
        return "NaN"
    else:
        return "Not a " + nan_expand(n - 1)


ok = nan_expand(3)
print(ok)