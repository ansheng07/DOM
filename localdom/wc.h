/**************************************
 * Weichuan Li Non_Local differential equation 
 *************************************/
#include <iostream>
#include <fenv.h>   // enable floating point trap
#include <fstream>
#define MAXN 1000
#define MAXX0 1000

#include <iomanip>
#include <complex>
#include <cmath>
#include <stdio.h>
#include <gsl/gsl_integration.h>
#include<gsl/gsl_sf_hyperg.h>
#include <gsl/gsl_poly.h>
#include <gsl/gsl_sf.h>
#include"lapacke.h"
#include <armadillo>
#include <ctime>// include this header 
#include <gsl/gsl_sf_coulomb.h> 
#include <fenv.h>   // enable floating point trap
#include <fstream>
#define MAXN 1000
#define MAXX0 1000
#include <complex>
#include <cmath>
#include <iomanip>
#include <complex>
#include <cmath>
#include <vector>
#include <math.h>       /* pow */

using std::cerr;
using std::endl;
#include <fstream>
#include <gsl/gsl_sf_coulomb.h> 
using std::ofstream;
#include <cstdlib> // for exit function
//#include <conio.h>
using namespace arma;
using namespace std;

//using namespace Eigen;
using namespace std;
using std::cerr;
using std::endl;

using std::ofstream;
#include <cstdlib> // for exit function
//#include <conio.h>
using namespace arma;
using namespace std;




void double Legendre(int n, double t) // return P_{n}(t)
{


 return gsl_sf_legendre_Pl(n, t);
}

