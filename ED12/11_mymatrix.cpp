/*
mymatrix.hpp - v0.0. - __ / __ / _____
Author: _________________________
*/
// ----------------------------------------------- definicoes globais
#ifndef _MYMATRIX_H_
#define _MYMATRIX_H_
// dependencias
#include <iostream>
using std::cin;  // para entrada
using std::cout; // para saida
using std::endl; // para mudar de linha
#include <iomanip>
using std::setw; // para definir espacamento
#include <string>
using std::string; // para cadeia de caracteres
#include <fstream>
using std::ifstream; // para ler arquivo
using std::ofstream; // para gravar arquivo
template <typename T> class Matrix {
private: // area reservada
  int lines;
  int columns;
  T **data;

public: // area aberta
  Matrix(int lines, int columns) 
  {
    // definir valores iniciais
    this->lines = lines;
    this->columns = columns;
    // reservar area
    data = new T *[lines];
    for (int x = 0; x < lines; x = x + 1) 
    {
      data[x] = new T[columns];
    } // end for
  }   // end constructor

  
  ~Matrix()
   {
    if (data != NULL) 
    {
      for (int x = 0; x < lines; x = x + 1) 
      {
        //delete(data[x]);
        data[x] = NULL;
        delete(data[x]);
      }//end for
      data = NULL;
      delete (data);
    }//end if
    data = NULL;
  }   // end destructor ( )
  

  void set(int line, int column, T value) 
  {
    if (line < 0 || line >= lines || column < 0 || column >= columns) 
    {
      cout << "\nERROR: Invalid position.\n";
    }//end if 
    else 
    {
      data[line][column] = value;
    } // end else
  }   // end set ( )

  T get(int line, int column) 
  {
    T value = 0; // value has type dependency
    if (line < 0 || line >= lines || column < 0 || column >= columns) 
    {
      cout << "\nERROR: Invalid position.\n";
    }//end if 
    else 
    {
      value = data[line][column];
    }// end else
  }//end get
    void print() 
    {
      cout << endl;
      for (int x = 0; x < lines; x = x + 1) 
      {
        for (int y = 0; y < columns; y = y + 1) 
        {
          cout << data[x][y] << "\t";
        }// end for
        cout << endl;
      }// end for
      cout << endl;
    }// end print ( )
  

  void read() 
  {
    cout << endl;
    for (int x = 0; x < lines; x = x + 1) 
    {
      for (int y = 0; y < columns; y = y + 1) 
      {
        cout << setw(2) << x << ", " << setw(2) << y << " : ";
        cin >> data[x][y];
      }// end for
    }// end for
    cout << endl;
  }// end read ( )


    int gerarInt(int inferior, int superior)
    {
        int n;
        n = inferior + rand() % (superior - inferior + 1);
        return n;
    }//end geraint

  void fprint(string fileName) 
  {
    ofstream afile;
    afile.open(fileName);
    afile << lines << endl;
    afile << columns << endl;
    for (int x = 0; x < lines; x = x + 1) 
    {
      for (int y = 0; y < columns; y = y + 1) 
      {
        afile << data[x][y] << endl;
      } // end for
    }   // end for
    afile.close();
  } // end fprint ( )

  void addRows(int primeira, int segunda, double constante) {
    if( primeira < 0 || primeira > lines - 1 || segunda < 0 || segunda > lines - 1){
        cout << "\nERROR: Invalid lines number for this matrix.\n" << endl;
    }else{
      int x = primeira;
      for (int y = 0; y < columns; y = y + 1) {
        data[x][y] = (data[x][y] + data[segunda][y]) * constante;
      }
    }
  }
  void subRows(int primeira, int segunda, double constante) 
  {
    if( primeira < 0 || primeira > lines - 1 || segunda < 0 || segunda > lines - 1)
    {
        cout << "\nERROR: Invalid lines number for this matrix.\n" << endl;
    }//end if
    else
    {
      int x = primeira;
      for (int y = 0; y < columns; y = y + 1) 
      {
        data[x][y] = (data[x][y] - data[segunda][y]) * constante;
      }//end for
    }//end else
  }//end rows

  Matrix<T> transpose()
  {
    Matrix<T> transposta (columns, lines);
    int x, y, aux;
    for (x = 0; x < lines; x = x + 1)
    {
      for (y = 0; y < columns; y = y + 1)
      {
        transposta.set(y, x, data[x][y]);
      }//end for
    }//end for    
    return transposta;
  }


  void scale(int constante) 
  {
    for (int x = 0; x < lines; x = x + 1) 
    {
      for (int y = 0; y < columns; y = y + 1) 
      {
        data[x][y] = data[x][y] * constante;
      }// end for
    }// end for
  }// end fprint ( )

  void fread(string fileName) 
  {
    ifstream afile;
    int m = 0;
    int n = 0;
    afile.open(fileName);
    afile >> m;
    afile >> n;
    if (m <= 0 || n <= 0) 
    {
      cout << "\nERROR: Invalid dimensions for matrix.\n" << endl;
    }//end if 
    else 
    {
      // guardar a quantidade de dados
      lines = m;
      columns = n;
      // reservar area
      data = new T *[lines];
      for (int x = 0; x < lines; x = x + 1) 
      {
        data[x] = new T[columns];
      }// end for
      // ler dados
      for (int x = 0; x < lines; x = x + 1) 
      {
        for (int y = 0; y < columns; y = y + 1) 
        {
          afile >> data[x][y];
        }// end for
      }// end for
    }// end else
    afile.close();
  }// end fread ( )

  bool isZeros() {
    bool result = true;
    int x = 0;
    int y = 0;
    while (x < lines && result) 
    {
      y = 0;
      while (y < columns && result) 
      {
        result = result && (data[x][y] == 0);
        y = y + 1;
      }//end while
      x = x + 1;
    }// end while
    return (result);
  }// end isZeros ( )

  int searchRows(int procurado) 
  {
    int result = -1;
    int x = 0;
    int y = 0;
    while (x < lines) 
    {
      y = 0;
      while (y < columns) 
      {
        if(data[x][y] == procurado)
        {
          result = x;
        }//end if
        y = y + 1;
      }// end while
      x = x + 1;
    }//end while
    return (result);
  } // end searchRows ( )

  int searchColumns(int procurado) 
  {
    int result = -1;
    int x = 0;
    int y = 0;
    while (x < lines) 
    {
      y = 0;
      while (y < columns) 
      {
        if(data[x][y] == procurado)
        {
          result = y;
        }//end if
        y = y + 1;
      }//end while
      x = x + 1;
    }//end while
    return (result);
  }//end searchRows ( )

  bool operator!=(const Matrix<T> other) 
  {
    bool result = false;
    int x = 0;
    int y = 0;
    if (other.lines == 0 || lines != other.lines || other.columns == 0 ||
        columns != other.columns) 
    {
      cout << "\nERROR: Missing data.\n" << endl;
    }//end if 
    else 
    {
      x = 0;
      while (x < lines && !result) 
      {
        y = 0;
        while (y < columns && !result) 
        {
          result = (data[x][y] != other.data[x][y]);
          y = y + 1;
        }//end while
        x = x + 1;
      }//end whie
    }//end else
    return (result);
  } // end operator!= ( )


  bool operator == (const Matrix<T> other) 
  {
    bool result = true;
    
    int x = 0;
    int y = 0;
    if (other.lines == 0 || lines != other.lines || other.columns == 0 || columns != other.columns) 
    {
      cout << "\nERROR: Missing data.\n" << endl;
    } 	
    else 
	{
      for(x=0; x < lines && result == true; x = x+1){
        for(y=0; y < columns; y = y+1 ){
          if(data[x][y] != other.data[x][y])
          {
            result = false;
          }
        }
      }
    }
    
    return (!result);
  }

    Matrix &operator = (const Matrix<T> other) 
    {
    if (other.lines == 0 || other.columns == 0) 
    {
      cout << "\nERROR: Missing data.\n" << endl;
    } 
    else
    {
      this->lines = other.lines;
      this->columns = other.columns;
      this->data = new T *[lines];
		for (int x = 0; x < lines; x = x + 1) 
		{
        this->data[x] = new T[columns];
		} // end for
			for (int x = 0; x < this->lines; x = x + 1) 
			{
				for (int y = 0; y < this->columns; y = y + 1) 
				{
					data[x][y] = other.data[x][y];
				} // end for
			}   // end for
    }// end if
    return (*this);
  } // end operator= ( )


  Matrix &operator+(const Matrix<T> other) 
  {
    static Matrix<T> result(1, 1);
    int x = 0;
    int y = 0;
    result = other;
    if (other.lines == 0 || lines != other.lines || other.columns == 0 ||
        columns != other.columns) 
    {
      cout << "\nERROR: Missing data.\n" << endl;
    }//end if
    else 
    {
      for (int x = 0; x < result.lines; x = x + 1) 
      {
        for (int y = 0; y < result.columns; y = y + 1) 
        {
          result.data[x][y] = data[x][y] + result.data[x][y];
        } // end for
      }   // end for
    }    // end else
    return (result);
  } // end operator+ ( )

  Matrix &operator-(const Matrix<T> other) 
  {
    static Matrix<T> result(1, 1);
    int x = 0;
    int y = 0;
    result = other;
    if (other.lines == 0 || lines != other.lines || other.columns == 0 ||
        columns != other.columns) 
    {
      cout << "\nERROR: Missing data.\n" << endl;
    }//end if 
    else 
    {
      for (int x = 0; x < result.lines; x = x + 1) 
      {
        for (int y = 0; y < result.columns; y = y + 1) 
        {
          result.data[x][y] = data[x][y] - other.data[x][y];
        } // end for
      }   // end for
    }     // end if
    return (result);
  } // end operator- ( )

  Matrix &operator*(const Matrix<T> other) 
  {
    static Matrix<T> result(1, 1);
    int x = 0;
    int y = 0;
    int z = 0;
    int sum = 0;
    if (lines <= 0 || columns == 0 || other.lines <= 0 || other.columns == 0 ||
        columns != other.lines) 
    {
      cout << endl << "ERROR: Invalid data." << endl;
      result.data[0][0] = 0;
    }//end if
     else 
     {
      result.lines = lines;
      result.columns = other.columns;
      result.data = new T *[result.lines];
      for (int x = 0; x < result.lines; x = x + 1) 
      {
        result.data[x] = new T[result.columns];
      } // end for
      for (x = 0; x < result.lines; x = x + 1) 
      {
        for (y = 0; y < result.columns; y = y + 1) 
        {
          sum = 0;
          for (z = 0; z < columns; z = z + 1) 
          {
            sum = sum + data[x][z] * other.data[z][y];
          } // end for
          result.data[x][y] = sum;
        } // end for
      }   // end for
    }     // end else
    return (result);
  } // end operator* ( )

  const int getLines() { return (lines); }     // end getLines ( )
  const int getColumns() { return (columns); } // end getColumns ( )

  bool Identidade()
  {
    bool result = 1;
    for (int x = 0; x < lines; x = x + 1) 
    {
      for (int y = 0; y < columns; y = y + 1) 
      {
        if(x == y)
        {
          if(data[x][y] != 1)
          {
            result = result * 0;
          }//end if
        }//end if
        else
        {
          if(data[x][y] != 0)
          {
            result = result * 0;
          }//ed if
        }//end else
      }//end for
    }//end for
    return result;
  }

};
#endif
