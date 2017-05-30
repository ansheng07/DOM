import numpy as np
import numpy
import scipy
import math
import cmath
from scipy import special
from scipy.special import legendre
import scipy.constants as sc
from scipy.integrate import quad
from scipy.integrate import quadrature
from scipy.misc import derivative

from scipy.special import spherical_jn 
from scipy import integrate
from scipy.special import sph_jn 
from scipy.special import spherical_yn
from numpy.linalg import inv
from numpy.linalg import pinv
from numpy.linalg import tensorinv
from matplotlib.legend_handler import HandlerLine2D
import scipy.special as sp
import numpy as np
import matplotlib.pyplot as plt
#from le import GaussLegendreWeights
import cmath



from numpy import loadtxt
import matplotlib.pyplot as plt
from matplotlib import pyplot
import matplotlib.ticker as mtick
import numpy as np
from matplotlib.legend_handler import HandlerLine2D


data=loadtxt("example.txt",float)
#data1=loadtxt("sol_R_mat",float)
#data1=loadtxt("zero.txt",float)
#print(data)
#data=loadtxt("misc3.txt",float)
scale_pow = 2
w0=data[:,0]
w1=data[:,1]

#j0=data1[:,0]
#j1=data1[:,1]
w00=[]
j00=[]
for i in w1:
   w00.append(i**2.0)

w0=data[:,0]
w2=data[:,2]

#j0=data1[:,0]
#j2=data1[:,2]
w11=[]

for i in w2:
    w11.append(i**2.0)

from operator import add

ww= map(add, w00, w11)


plt.suptitle('Ca40 scattering state energy=15 MeV l=1 potential=0.0', fontsize=9, fontweight='bold')


plt.plot(w0,ww,'*',label='weichuan')
plt.legend(loc='upper left')


  
plt.ylabel('log(\phi(r))')
plt.xlabel('r[fm]')
plt.show()


