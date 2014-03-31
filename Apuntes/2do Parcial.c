//Pilas
	Es un tipo de dato abstracto lineal de elementos del mismo tipo, dónde cada
	elemento se puede agregar o quitar únicamente por uno de sus extremos.

  En consecuencia, los elementos de la pila se eliminan en orfen inverso al que
  se insertaron, es decir , "el último elemento en entrar, es el primero en
  salir".
  
  Debido a esto, a una pila se le conoce como una estructura LIFO (Last-in , First-out).

  La pila se puede definir como una colección de datos a los cuales se puede
  acceder por un extremo llamado tope.

  //Representación de la pila
    Una pila se puede representar de dos formas:
      1) Estática.- Utilizando un arreglo
      2) Dinámica - Utilizando una lista.

  //Tope 
    1; El lugar donde se va a insertar un elemento en la pila.
    2; El elemento que se va a eliminar de la pila.

  //Restricciones
    1; Para la pila estática, no se puede insertar un nuevo elemento en una
      pila llena, si ésta ocurre, se estaría provocando un desbordamiento.

    2; No se puede eliminar un elmento de una pila vacía, si ésto ocurre,
      se estaría provocando un subdesbordamiento.

  //Operaciones
    1; Insetar un elemento (push): Insetar un elemento en el tope de la pila.
    2; ELiminar un elemento (pop): Elimina el elemento que se encuentra en el
      tope de la pila.

  //Implementación
    typedef struct{
      Datos elementos[tamaño maximo];
      int tope;
      char tipo[100];
      int contElems;
    }Pila;

    //Crear Pila.- Cre la pila y la inicializa para su uso normal
      
    //Push
    //Pop