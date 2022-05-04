/* OOP - a technique 
( otherwise we have POP)

- 1 Ob = 1 attribute(Data) + 1 Method(sourcecode)
VD: Ob = a human, a animal...
    Atr = name, age, color skin, height, weight ... 
    Met = a human can walk, sit, lie, ...

- 1 Class = 1 group of objiect which have the same properties.
  1 Class = 1 attribute + 1 Method
Moreover, class is used to defined a new datatype.

- Feature of OOP:

1 : 
    Abstraction( Truu truong ), hidden some details which not refer directly to programmer.
    Ex: Goi mon => ko care cach lam qua.

2 :
    Encapsulation & Data Hiding: 

*/
#include <libstdc++.h>

public class Developer
{
       private string Name {get;set;}
       public void AnalyzeRequirement()
       {
            cout<<"Let's analize our customer :\n";
       }

       public void WriteCode()
       {
           cout<<"Vietcode";
       }

       public void Deploy()
       {
            cout<<"Submit our product";
       }
}
