with open("py4\\text.txt") as file1:
    with open("py4\\drugtext.txt", "w") as file2:
        for line in file1:
            file2.write(line)