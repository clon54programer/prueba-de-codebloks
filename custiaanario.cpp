#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout << "coloque su nombre por favor" << endl;
    string UserName;
    cin >> UserName;

    cout << "bienvenido " << UserName << " toca examen" << endl; //haci se concatena

    cout<< "quiere hacerlo" <<endl;
    string condicion;
    cin >> condicion;
    if(condicion == "y"){
     //preguntas
     string Exercise1 = "1.Una madre tiene 40 años y su hijo tiene 10. ¿Cuantos años deben pasar para que la edad de la madre sea el triple que la edad de su hijo?";
     string Exercise2 = "2.Hay 3 cajas de igual tamaño. Dentro de cada una de las tres cajas hay otras dos mas pequeñas, y en cada una de ellas hay otras cuatro todavía más pequeñas. ¿Cuantas cajas hay en total?";
     string Exercise3 = "3.¿Qué hace que el número 542.986.731 sea unico?";
     string Exercise4 = "4.¿Cuántos animales llevó Moises en el arca?";
     string Exercise5 = "5.Conduces un autobus en el que se montan 18 personas. En la siguiente parada se bajan 5 pero suben otras 13. Al llegar a la siguiente estación, se bajan 21 y suben 4. ¿Cuántas personas quedan en el autobus?" ;
     string Exercise6 = "6.Qué cantidad de las siguientes sustancias contiene mayor número de moléculas?:Masas atómicas (g·mol-1): H=1; C=12; O=16.";
     string Exercise7 = "7.Un depósito de 4 L contiene nitrógeno gaseoso a una temperatura de 325 K y 2 atm de presión. A continuación se introduce en el depósito helio hasta que se alcanza una presión de 5 atm, a la misma temperatura. Indicar cuál de las siguientes afirmaciones es:";
     string Exercise8 = "8.La masa atómica media relativa de los elementos no tiene un número entero, ¿esto se debe a que?";
     string Exercise9 = "9.-Una reacción en equilibrio y endotérmica, cuando aumenta la temperatura, producirá un desplazamiento del equilibrio:";
     string Exercise10 = "10.- Dados los elementos Ca y S; se puede decir que:";
     string Exercise11 = "11.-¿Qué es un diptongo?";
     string Exercise12 = "12.-¿Quién escribió el Quijote?";
     string Exercise13 = "13.-¿Cuáles fueron los primeros textos escritos en castellano y árabe?";
     string Exercise14 = "14.-¿De dónde procedía la ideología del Renacimiento?";
     string Exercise15 = "15.-¿De dónde proceden los romances?";
     //opciones
     string option1[2] = {"a.5 años, cuando el hijo tenga 15 su madre tendra 45, que es el triple de edad ", "b.5 años, cuando el hijo tenga 17 su madre tendrá 45, que es el triple de edad "};
     string option2[3] = {"a.En total hay 24 cajas.", "B.En total hay 30 cajas", "C.En total hay 12 cajas"};
     string option3[3] = {"A.que es un float ", "B.que tiene todos las cifras ordenadas alfabéticamente: cinco, cuatro, dos, nueve, ocho, seis, siete, tres y uno ", "C.es numero de personas que viven en cabo verde "};
     string option4[3] = {"A.150 ", "B.2 de cada especie ", "C.Ninguno.El arca era de Noé"};
     string option5[3] = {"A.9 personas", "B.10 personas", "C.8 personas"};
     string option6[4] = {"A.10 g de CH4 ", "B.5 g de CO2 ", "C.10 g de O2 ", "D.5 g de H2O"};
     string option7[4] = {"A. Toda adición de gas a un recipiente hace aumentar la temperatura ", "B. La presión parcial del nitrógeno gaseoso es de 2 atm ", "C. Para que la presión final sea de 4 atm, el volumen del recipiente ha debido disminuir su capacidad ", "D. La presión parcial del gas nitrógeno es 2,5 atm"};
     string option8[4] = {"A) Los átomos del elemento tienen distinto número de protone ", "B) Los átomos del elemento tienen distinto número de electrones ", "C) Hay impurezas de otros elementos ", "D) Los átomos del elemento difieren en el número de neutrones"};
     string option9[4] = {"A)Hacia la derecha ", "B)No se produce desplazamiento ", "C)Hacia la izquierda ", "D) Hacia el menor volumen"};
     string option10[4] = {"A)El número de electrones de Ca2+ y S2- es el mismo ", "B)El radio del Ca2+ es mayor que el del S2 ", "C)El número de protones de ambos iones es el mismo ", "D)El radio del Ca es menor que el del S"};
     string option11[4] = {"a.Es la secuencia de dos consonantes. ", "b)Es la secuencia de dos vocales distintas que se pronuncian dentro de la misma sílaba. ", "c)Es la rima característica de los sonetos. ", "d) ningunas de las anteriores"};
     string option12;
     string option13[3] = {"A)Romances ", "B)Jarchas ", "C)Glosas "};
     string option14[3] = {"A)Italia", "B)Francia", "C)Portugal"};
     string option15[3] = {"A)De las cántigas", "B)De los cantares", "C)De las canciones"};
     //interfaz grafica
     //pregunat1
     cout<<Exercise1<<endl;
     cout<<option1[0]<<option1[1]<<endl;
     cout << "respuesta"<<endl;
     string response1;
     cin >> response1;
     //pregunat2
     cout<<Exercise2<<endl;
     cout<<option2[0]<<option2[1]<<option2[2]<<endl;
     cout << "respuesta"<<endl;
     string response2;
     cin >> response2;
    //pregunat3
     cout<<Exercise3<<endl;
     cout<<option3[0]<<option3[1]<<option3[2]<<endl;
     cout << "respuesta"<<endl;
     string response3;
     cin >> response3;
     //pregunat4
     cout<<Exercise4<<endl;
     cout<<option4[0]<<option4[1]<<option4[2]<<endl;
     cout << "respuesta"<<endl;
     string response4;
     cin >> response4;
    //pregunat5
     cout<<Exercise5<<endl;
     cout<<option5[0]<<option5[1]<<option5[2]<<endl;
     cout << "respuesta"<<endl;
     string response5;
     cin >> response5;
     //pregunat6
     cout<<Exercise6<<endl;
     cout<<option6[0]<<option6[1]<<option6[2]<<option6[3]<<endl;
     cout << "respuesta"<<endl;
     string response6;
     cin >> response6;
     //pregunat7
     cout<<Exercise7<<endl;
     cout<<option7[0]<<option7[1]<<option7[2]<<option7[3]<<endl;
     cout << "respuesta"<<endl;
     string response7;
     cin >> response7;
     //pregunat8
     cout<<Exercise8<<endl;
     cout<<option8[0]<<option8[1]<<option8[2]<<option8[3]<<endl;
     cout << "respuesta"<<endl;
     string response8;
     cin >> response8;
     //pregunat9
     cout<<Exercise9<<endl;
     cout<<option9[0]<<option9[1]<<option9[2]<<option9[3]<<endl;
     cout << "respuesta"<<endl;
     string response9;
     cin >> response9;
     //pregunat10
     cout<<Exercise10<<endl;
     cout<<option10[0]<<option10[1]<<option10[2]<<option10[3]<<endl;
     cout << "respuesta"<<endl;
     string response10;
     cin >> response10;
     //pregunat11
     cout<<Exercise11<<endl;
     cout<<option11[0]<<option11[1]<<option11[2]<<option11[3]<<endl;
     cout << "respuesta"<<endl;
     string response11;
     cin >> response11;
     //pregunat13
     cout<<Exercise13<<endl;
     cout<<option13[0]<<option13[1]<<option13[2]<<endl;
     cout << "respuesta"<<endl;
     string response13;
     cin >> response13;
      //pregunat14
     cout<<Exercise14<<endl;
     cout<<option14[0]<<option14[1]<<option14[2]<<endl;
     cout << "respuesta"<<endl;
     string response14;
     cin >> response14;
      //pregunat15
     cout<<Exercise15<<endl;
     cout<<option15[0]<<option15[1]<<option15[2]<<endl;
     cout << "respuesta"<<endl;
     string response15;
     cin >> response15;
     //pregunat12
     cout<<Exercise12<<endl;
     cout << "respuesta"<<endl;
     string response12;
     cin >> response12;

     //logica
     if(response1 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response2 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response3 == "b"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response4 == "c"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response5 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response6 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response7 == "b"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response8 == "d"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response9 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response10 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response11 == "b"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response12 == "miguel de cervantes" || "MIGUEL DE CERVANTES" || "Miguel De Cervantes"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta";
     }
     if(response13 == "b"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response14 == "a"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }
     if(response15 == "b"){
        cout<< "correcta"<<endl;
     }
     else{
        cout << "incorrecta"<<endl;
     }

if(response1 == "a" && response2 == "a" && response3 == "b" && response4 == "c" && response5 == "a" && response6 == "a" && response7 == "b" && response8 == "d" && response9 == "a"  && response10 == "a" || "A" && response11 == "b" && response12 == "miguel de cervantes" && "MIGUEL DE CERVANTES" &&

    "Miguel De Cervantes" && response13 == "b" && response14 == "a"  && response15 == "b" ){
    cout << "las 15 preguntas correctas"<<endl;
}
else{
    cout << "tienes una mala";
}
    }
    else{
        cout << "bueno";
    }




    return 0;
}
