# include<iostream.h>
using System;
using System.Collections.Generic;


internal class Program
{
    class Student
    {
        public Physics Physics { get; set; }
        public Chemistry Chemistry { get; set; }
        public Mathematics Mathematics { get; set; }
        public Student(Physics physics, Chemistry chemistry, Mathematics mathematics)
        {
            Physics = physics;
            Mathematics = mathematics;
            Chemistry = chemistry;
        }
    }


    class Marks
    {
        public int RollNumber { get; set; }
        public string Name { get; set; }
        public int marks { get; set; }


        public Marks (int rollNumber, string name, int marks)
        {
            RollNumber = rollNumber;
            Name = name;
            this.marks = marks;
        }
    }
    class Physics : Marks
    {
        public Physics(int rollNumber, string name, int marks) : base(rollNumber, name, marks)
        {
        }
    }
    class Chemistry : Marks
    {
        public Chemistry(int rollNumber, string name, int marks) : base(rollNumber, name, marks)
        {
        }
    }
    class Mathematics : Marks
    {
        public Mathematics(int rollNumber, string name, int marks) : base(rollNumber, name, marks)
        {
        }
    }
    static void Main()
    {
        Console.Write("Enter the number of students:");
        int N = int.Parse(Console.ReadLine());
        List<Student> students = new List<Student>();


        for (int i = 0; i < N; i++)
        {
            Console.Write("Enter student name:");
            string name = Console.ReadLine();
            Console.Write("Enter marks for physics:");
            int physicsMarks = int.Parse(Console.ReadLine());
            Console.Write("Enter marks for chemistry:");
            int chemistryMarks = int.Parse(Console.ReadLine());
            Console.Write("Enter marks for mathematics:");
            int mathematicsMarks = int.Parse(Console.ReadLine());


            students.Add(new Student(new Physics(i, name, physicsMarks), new Chemistry(i, name, chemistryMarks), new Mathematics(i, name, mathematicsMarks)));
        }


        for (int i = 0; i < students.Count; i++)
        {
            Console.Write($"{students[i].Chemistry.Name} total marks is:{students[i].Chemistry.marks + students[i].Physics.marks + students[i].Mathematics.marks}");
        }


        int average = 0;
        for (int i = 0; i < students.Count; i++)
        {
            average += (students[i].Chemistry.marks + students[i].Physics.marks + students[i].Mathematics.marks)/3;
    }
        Console.Write("Average marks of the class:{average/students.Count}");


        Console.ReadKey();
    }


}
oupt:
enter the student name:sree
enter the student reg no:192111004
enter the chemistry marks:77
enter the physics marks:89
enter the mathemetics marks:54
total mark:220
average:65%


