# Simple singleton design pattern
Restricts the instantiation of a class to one single class instance

#Creating classes
```cpp
class MyClass : public Singleton<MyClass> {
public:
  void MyFunction();
}
```

#Accessing the class
```cpp
MyClass::Get().MyFunction();
```
