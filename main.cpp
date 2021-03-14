#include <iostream>

class Main {
  void add(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"ArrayList";
    a.add("My");
    a.add("name");
    a.add("is");
    a.add("William");
    a.add(3,"Choi");
    cout<<"What is your name? "+a;
  }
  void clear(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"Clear";
    a.add("Please");
    a.add("clear");
    a.add("this");
    cout<<a+" Ok!";
    a.clear();
    cout<<a+" Done!";
  }
  void contains(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"Contains";
    a.add("William");
    a.add("Youngjun");
    a.add("Choi");
    cout<<"What is your full name? "+a;
    cout<<"Is William part of your name? "+a.contains("William");
    cout<<"Is David part of your name? "+a.contains("David");
  }
  void ensureCapacity(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"EnsureCapacity";
    a.add("please");
    a.add("add");
    a.add("another");
    a.add("word");
    cout<<a;
    a.ensureCapacity(5);
    a.add(1,"don't");
    cout<<a;
  }
  void isEmpty(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"IsEmpty";
    cout<<a;
    cout<<"Is the array empty? "+a.isEmpty();
    a.add("there");
    a.add("are");
    a.add("four");
    a.add("words");
    cout<<a;
    cout<<"Is the array empty? "+a.isEmpty();
  }
  void get(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"Get";
    a.add("first");
    a.add("second");
    a.add("third");
    a.add("fourth");
    a.add("fifth");
    cout<<a;
    cout<<"Pick the second element in the array: "+a.get(1);
    cout<<"Pick the fifth element in the array: "+a.get(4);
  }
  void remove(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"Remove";
    a.add("remove");
    a.add("the");
    a.add("first");
    a.add("word");
    cout<<(a);
    a.remove(0);
    cout<<(a);
  }
  void size(){
    ArrayList<String> a= new ArrayList<String>();
    cout<<"";
    cout<<"Size";
    a.add("1");
    a.add("2");
    a.add("3");
    a.add("4");
    a.add("5");
    cout<<a;
    cout<<"What is the size of the arry? "+a.size();
  }
}
int main() {
  add;
  clear;
  contains;
  ensureCapacoty;
  isEmpty;
  get;
  remove;
  size;
  cout<<add;
  cout<<clear;
  cout<<contains;
  cout<<ensureCapacoty;
  cout<<isEmpty;
  cout<<get;
  cout<<remove;
  cout<<size;

  return 0;
}