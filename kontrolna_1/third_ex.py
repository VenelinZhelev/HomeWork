def copy_file_content(input_filename, output_filename):

    with open(input_filename, 'r') as input_file:
        input_content = input_file.read()

    with open(output_filename, 'w') as output_file:
        output_file.write(input_content)

copy_file_content('C:\Users\admin\Documents\C++\Cprogramming\kontrolna_1\input.txt', 'C:\Users\admin\Documents\C++\Cprogramming\kontrolna_1\output.txt')
