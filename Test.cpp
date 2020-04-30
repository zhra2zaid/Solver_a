#include "doctest.h"
#include "solver.hpp"
using namespace solver;

TEST_CASE("RealVariable test case") {

    RealVariable x;
    
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    double pvalue = solve(2*x-4.0 == 10.0);   
    CHECK( pvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    double yvalue = solve(2*x-4.0 == 10.0);  
    CHECK( yvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    double uvalue = solve(2*x-4.0 == 10.0);  
    CHECK( uvalue == 7 );
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    double ivalue = solve(2*x-4.0 == 10.0);   
    CHECK( ivalue == 7 );
    CHECK(solve(x==3)==3);
    CHECK(solve(2*x==2)==1);
    CHECK(solve(x*3+1-1==3)==1);
    CHECK(solve(x==2)==2);
    CHECK(solve(2*x+1==3)==1);
    CHECK(solve(x==3)==3);
    CHECK(solve(2*x==2)==1);
    CHECK(solve(x*3+1-1==3)==1);
    CHECK(solve(x==2)==2);
    CHECK(solve(2*x+1==3)==1);
    CHECK((solve(4*(x^2)-2==14)==4 || solve(4*(x^2)-2==14)==-4));
    CHECK((solve(2*(x^2)+6*x+4==0)==-1 || solve(2*(x^2)+6*x+4==0)==-2));
    CHECK((solve(2*(x^2)+9*x+4==0)==-1/2 || solve(2*(x^2)+9*x+4==0)==-4));
    CHECK((solve(3*(x^2)+13*x==0)==0 || solve(3*(x^2)+13*x==0)==-13/3));
    CHECK((solve(3*(x^2)+13*x+10==0)==-1 || solve(3*(x^2)+13*x+10==0)==-10/3));
    CHECK(solve(x/x+x==2)==1);
    CHECK(solve(x-x+x==x-x+1)==1);
    CHECK((solve(x*x*(x/x)==1)==1 || solve(x*x*(x/x)==1)==-1));
    CHECK(solve(x*x/x==1)==1);
     CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
     CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
     CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
     CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK(solve(1+1+1+1+x==0)==-4);
    CHECK(solve(x+x+4*x==6)==1);
     CHECK(solve(x/x+x==2)==1);
    CHECK(solve(x-x+x==x-x+1)==1);
    CHECK((solve(x*x*(x/x)==1)==1 || solve(x*x*(x/x)==1)==-1));
    CHECK(solve(x*x/x==1)==1);
    CHECK(solve(1+1+1+1+x==0)==-4);
    CHECK( solve(2*x-4 == 10) == 7);
    CHECK( ( solve((x^2) == 16) == 4 || solve((x^2) == 16) == -4) );
    CHECK( (solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == 4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) == -4) );
    double xvalue = solve(2*x-4.0 == 10.0);   // xvalue == 7
    CHECK( xvalue == 7 );

    // should throw error cause there is no real root
    CHECK_THROWS( solve((x^2) == -16) );
    CHECK_THROWS(solve(x*x==-1));
    CHECK_THROWS(solve(x*x*x*x==1));
    CHECK_THROWS(solve(x^-1));
    CHECK_THROWS(solve(x/0==1));
    CHECK_THROWS(solve(x*0==1));

   
    
}

TEST_CASE("ComplexVariable test case") {

    ComplexVariable x;

    CHECK(solve(x+3i==1)==complex<double>(1,-3));
    CHECK(solve(x+1i==4)==complex<double>(4,-1));
    CHECK(solve(3*x-4i*3i==1)==complex<double>(1/3,4));
    CHECK(solve(x*3-5i==2)==complex<double>(2/3,5));
    CHECK(solve(x*2-2==2i)==complex<double>(1,1));
    CHECK(solve(x*3-2+x*5+4==3i-2i+5i)==complex<double>(-1/4,3/4));
    CHECK(solve(1+2+3+4+2*x==4i)==complex<double>(5,2));
    CHECK(solve(-3.5i+x==2)==complex<double>(2,3.5));
    CHECK(solve(3==x-1i)==complex<double>(3,1));
    CHECK(solve(3i+x+3==6i)==complex<double>(-3,3)); 
    CHECK(solve(3-x+2i)==complex<double>(3,2));
    CHECK(solve(x==1i)==complex<double>(0,1));
    CHECK(solve(-3+x-2i==0)==complex<double>(3,2));
    CHECK(solve(3.0+2i-1i==x-2i)==3.0+3i);
    CHECK(solve(x*3-2+x*5+4==3i-2i+5i)==complex<double>(-1/4,3/4));
    CHECK(solve(1+2+3+4+2*x==4i)==complex<double>(5,2));
    CHECK(solve(-3.5i+x==2)==complex<double>(2,3.5));
    CHECK(solve(3==x-1i)==complex<double>(3,1));
    CHECK(solve(3i+x+3==6i)==complex<double>(-3,3)); 
    CHECK(solve(3-x+2i)==complex<double>(3,2));
    CHECK(solve(4i+2.0-x==0)==4i+2.0);
    CHECK(solve(x+3i==1)==complex<double>(1,-3));
    CHECK(solve(x+1i==4)==complex<double>(4,-1));
    CHECK(solve(3*x-4i*3i==1)==complex<double>(1/3,4));
    CHECK(solve(x*3-5i==2)==complex<double>(2/3,5));
    CHECK(solve(x*2-2==2i)==complex<double>(1,1));

    CHECK(solve(4*(x^2)+9==0)==complex<double>(0,-3/2));
    CHECK((solve(2*(x^2)+2*x+13==0)==complex<double>(1/2,-5/2) || solve(2*(x^2)+2*x+13==0)==complex<double>(-1/2,-5/2)));
    CHECK((solve(-4*(x^2)-8*x-8==0)==complex<double>(1,1) || solve(-4*(x^2)-8*x-8==0)==complex<double>(-1,1)));
    CHECK((solve(-1*(x^2)+6*x-10==0)==complex<double>(-3,1) || solve(-1*(x^2)+6*x-10==0)==complex<double>(3,1)));
    CHECK((solve(5*(x^2)+4*x+8==0)==complex<double>(2/5,-6/5) || solve(5*(x^2)+4*x+8==0)==complex<double>(-2/5,-6/5)));

    CHECK_THROWS(solve((x^3)==1));
    CHECK_THROWS(solve(x*x*x==1));
    CHECK_THROWS(solve(x+x+x+(x^-3)==3));
    CHECK_NOTHROW(solve(x*x*x*x*x/(x^3)==1));
    CHECK_NOTHROW(solve(x/(x^2)==1)); //maybe going to work
    CHECK_THROWS(solve(0-x-x-x-x/0));
    CHECK_THROWS(solve(0*x==1));
    CHECK_THROWS(solve(x*0+2));
    CHECK_THROWS(solve(x^(2/-8)));
    CHECK_THROWS(solve(x*0i));
    CHECK_THROWS(solve(x^3i));
}
