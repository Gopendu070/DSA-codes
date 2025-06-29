package com.company;
interface  FullTime{
     void incrementF();
}
interface Intern{
    void incrementI();
}
class Employee implements FullTime, Intern {
    double salaryI=9000.0;
    double salaryF=30000.0;
    @Override
    public void incrementF() {
        System.out.println("Current Fulltime Salary= "+salaryF);
        salaryF+=salaryF*0.3;
        System.out.println("After Increment Fulltime Salary= "+salaryF);
    }

    @Override
    public void incrementI() {
        System.out.println("Current Intern Salary= "+salaryI);
        salaryI+=salaryI*0.2;

        System.out.println("After Increment Intern Salary= "+salaryI);
    }

    public static void main(String[] args) {
        Employee obj=new Employee();
        obj.incrementF();
        obj.incrementI();
    }
}
