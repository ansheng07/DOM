//*** 32 point Gaussian quadrature
 const double GaussIntegx32[]={
 -0.997263861849481563545,
 -0.985611511545268335400,
 -0.964762255587506430774,
 -0.934906075937739689171,
 -0.896321155766052123965,
 -0.849367613732569970134,
 -0.794483795967942406963,
 -0.732182118740289680387,
 -0.663044266930215200975,
 -0.587715757240762329041,
 -0.506899908932229390024,
 -0.421351276130635345364,
 -0.331868602282127649780,
 -0.239287362252137074545,
 -0.144471961582796493485,
 -0.048307665687738316235,
 0.048307665687738316235,
 0.144471961582796493485,
 0.239287362252137074545,
 0.331868602282127649780,
 0.421351276130635345364,
 0.506899908932229390024,
 0.587715757240762329041,
 0.663044266930215200975,
 0.732182118740289680387,
 0.794483795967942406963,
 0.849367613732569970134,
 0.896321155766052123965,
 0.934906075937739689171,
 0.964762255587506430774,
 0.985611511545268335400,
 0.997263861849481563545
}; 
 const double GaussIntegw32[] = {
 0.007018610009470096600,
 0.016274394730905670605,
 0.025392065309262059456,
 0.034273862913021433103,
 0.042835898922226680657,
 0.050998059262376176196,
 0.058684093478535547145,
 0.065822222776361846838,
 0.072345794108848506225,
 0.078193895787070306472,
 0.083311924226946755222,
 0.087652093004403811143,
 0.091173878695763884713,
 0.093844399080804565639,
 0.095638720079274859419,
 0.096540088514727800567,
 0.096540088514727800567,
 0.095638720079274859419,
 0.093844399080804565639,
 0.091173878695763884713,
 0.087652093004403811143,
 0.083311924226946755222,
 0.078193895787070306472,
 0.072345794108848506225,
 0.065822222776361846838,
 0.058684093478535547145,
 0.050998059262376176196,
 0.042835898922226680657,
 0.034273862913021433103,
 0.025392065309262059456,
 0.016274394730905670605,
 0.007018610009470096600
};

const GaussInteg Gauss32(32,GaussIntegx32,GaussIntegw32);