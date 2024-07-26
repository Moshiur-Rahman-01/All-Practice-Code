subjects=["C","C++","JAVA","PYTHON"]
print(len(subjects))

# new element add process
subjects.append("HTML")
print(subjects) 

# majhe kono element add hobe
subjects.insert(2,"CSS")
print(subjects) 

# element bad dite hole
subjects.remove("CSS")
print(subjects) 

# small to big sorting
subjects.sort()
print(subjects)

# want you reverse
subjects.reverse()
print(subjects)

# end element remove process
subjects.pop()
print(subjects)

# all element delete process
subjects.clear()
print(subjects)

# element copy process
subjects_2 = subjects.copy()
print(subjects_2)

subjects=["C","C++","JAVA","PYTHON"]
pos = subjects.index("JAVA")
print(pos)

subject = [20,10,4,55,4,4]
count = subject.count(4)
print(count)