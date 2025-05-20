# a, b, c = map(int, input().split())
# d ,e = map(int, input().split())
# print(a+b+c+d+e)


student_grades = {"Alice": 85, "Bob": 72, "Charlie": 90, "David": 65, "Eva": 88, "John": 45}

# Complete the code 
a="Bob"
# print(student_grades.keys())
if a in student_grades.keys():
    print(student_grades.get["Bob"])
else:
    print('Not Found')