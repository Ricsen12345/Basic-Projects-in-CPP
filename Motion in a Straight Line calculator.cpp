#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int motion;
    int formula;
    float axis;
    float Kinematic_Eq; //GLBB
    float GLB_Operation; //GLB
    float v, x, t, a; //GLB
    float xi, xf, vf, vi, g, h; //GLBB

    cout << "MOTION IN ONE DIMENSION" << endl;
    cout << "GLB = 1" << endl;
    cout << "GLBB = 2" << endl;
    cout << "1 OR 2? ";
    cin >> motion;
    cout << endl;

    if (motion==1){
        cout << "GLB OPERATION" << endl;
        cout << "WHAT DO YOU WANT TO FIND?" << endl;
        cout << "v = 1, x = 2, t = 3, a = 4" << endl;
        cout << "1 OR 2 OR 3 OR 4? ";
        cin >> GLB_Operation;
        cout << endl;

        if (GLB_Operation==1){
            cout << "PLEASE CHOOSE THE FORMULA" << endl;
            cout << "1) v=x/t" << endl;
            cout << "2) v=at" << endl;
            cout << "3) sqrt of xa" << endl;
            cout << "1 OR 2 OR 3? ";
            cin >> formula;
            cout << endl;
            switch (formula){
                case(1):
                    cout << "TYPE THE MAGNITUDE OF x (meter)= ";
                    cin >> x;
                    cout << "TYPE THE MAGNITUDE OF t (second)= ";
                    cin >> t;
                    cout << endl;
                    v = x/t;
                    cout << "v = x/t = " << x << "/" << t << " = " << v << " m/s" << endl;
                    break;
                case(2):
                    cout << "TYPE THE MAGNITUDE OF a " << "[meter/(second^2)]= ";
                    cin >> a;
                    cout << "TYPE THE MAGNITUDE OF t (second)= ";
                    cin >> t;
                    cout << endl;
                    v = a*t;
                    cout << "v = at = " << a << "x" << t << " = " << v << "m/s" << endl;
                    break;
                case (3):
                    cout << "TYPE THE MAGNITUDE OF x (meter)= ";
                    cin >> x;
                    cout << "TYPE THE MAGNITUDE OF a [meter/(second)^2]= ";
                    cin >> a;
                    cout << endl;
                    v = sqrt(a*x);
                    cout << "v = sqrt of ax = sqrt of " << a << "x" << x << " = " << v << "m/s" << endl;
                    break;
                default:
                    cout << "THERE IS NO SUCH FORMULA" << endl;
                    cout << "PLEASE CHOOSE EITHER 1 OR 2 OR 3" << endl;
            }
        } else if (GLB_Operation==2){
            cout << "PLEASE CHOOSE THE FORMULA" << endl;
            cout << "1) x = vt" << endl;
            cout << "2) x = at^2" << endl;
            cout << "3) x = sqrt of v^2/a" << endl;
            cout << "1 OR 2 OR 3? ";
            cin >> formula;
            cout << endl;
            switch (formula){
                case(1):
                    cout << "TYPE THE MAGNITUDE OF v (meter/second)= ";
                    cin >> v;
                    cout << "TYPE THE MAGNITUDE OF t (second)= ";
                    cin >> t;
                    cout << endl;
                    x = v*t;
                    cout << "x = vt = " << v << "x" << t << " = " << x << "m" << endl;
                    break;
                case(2):
                    cout << "TYPE THE MAGNITUDE OF a [meter/(second)^2]= ";
                    cin >> a;
                    cout << "TYPE THE MAGNITUDE OF t (second)= ";
                    cin >> t;
                    cout << endl;
                    x = a*t*t;
                    cout << "x = at^2 = " << a << "x" << t << "^2" << " = " << x << "m" << endl;
                    break;
                case(3):
                    cout << "TYPE THE MAGNITUDE OF v (meter/second)= ";
                    cin >> v;
                    cout << "TYPE THE MAGNITUDE OF a [meter/(second)^2]= ";
                    cin >> a;
                    cout << endl;
                    x = sqrt(v*v/a);
                    cout << "x = sqrt of v^2/a = sqrt of " << v << "^2" << "/" << a << " = " << x << "m" << endl;
                    break;
                default:
                    cout << "THERE IS NO SUCH FORMULA" << endl;
                    cout << "PLEASE CHOOSE EITHER 1 OR 2 OR 3" << endl;
            }
        } else if (GLB_Operation==3){
            cout << "PLEASE CHOOSE THE FORMULA" << endl;
            cout << "1) t = x/v" << endl;
            cout << "2) t = v/a" << endl;
            cout << "3) t = sqrt of x/a" << endl;
            cout << "1 OR 2 OR 3? ";
            cin >> formula;
            cout << endl;
            switch (formula){
            case(1):
                cout << "TYPE THE MAGNITUDE OF x (meter)= ";
                cin >> x;
                cout << "TYPE THE MAGNITUDE OF v (meter/second)= ";
                cin >> v;
                cout << endl;
                t = x/v;
                cout << "t = x/v = " << x << "/" << v << " = " << t << "s" << endl;
                break;
            case(2):
                cout << "TYPE THE MAGNITUDE OF v (meter/second)= ";
                cin >> v;
                cout << "TYPE THE MAGNITUDE OF a [meter/(second)^2]= ";
                cin >> a;
                cout << endl;
                t = v/a;
                cout << "t = v/a = " << v << "/" << a << " = " << t << "s" << endl;
                break;
            case(3):
                cout << "TYPE THE MAGNITUDE OF x (meter): ";
                cin >> x;
                cout << "TYPE THE MAGNITUDE OF a [meter/(second)^2]= ";
                cin >> a;
                cout << endl;
                t = sqrt(x/a);
                cout << "t = sqrt of x/a = sqrt of " << x << "/" << a << " = " << t << "s" << endl;
                break;
            default:
                cout << "THERE IS NO SUCH FORMULA" << endl;
                cout << "PLEASE CHOOSE EITHER 1 OR 2 OR 3" << endl;
            }
        } else if (GLB_Operation==4){
            cout << "PLEASE CHOOSE THE FORMULA" << endl;
            cout << "1) a = v/t" << endl;
            cout << "2) a = x/t^2" << endl;
            cout << "3) a = v^2/x" << endl;
            cout << "1 OR 2 OR 3? ";
            cin >> formula;
            cout << endl;
            switch (formula){
                case(1):
                    cout << "TYPE THE MAGNITUDE OF v (meter/second)= ";
                    cin >> v;
                    cout << "TYPE THE MAGNITUDE OF t (second)= ";
                    cin >> t;
                    cout << endl;
                    a = v/t;
                    cout << "a = v/t = " << v << "/" << t << " = " << a << "m/s^2" << endl;
                    break;
                case(2):
                    cout << "TYPE THE MAGNITUDE OF x (meter)= ";
                    cin >> x;
                    cout << "TYPE THE MAGNITUDE OF t (second)= ";
                    cin >> t;
                    cout << endl;
                    a = x/(t*t);
                    cout << "a = x/t^2 = " << x << "/" << t << "^2" << " = " << a << "m/s^2" << endl;
                    break;
                case(3):
                    cout << "TYPE THE MAGNITUDE OF v (meter/second)= ";
                    cin >> v;
                    cout << "TYPE THE MAGNITUDE OF x (meter)= ";
                    cin >> x;
                    cout << endl;
                    a = v*v/x;
                    cout << "a = v^2/x = " << v << "^2" << "/" << x << " = " << a << "m/s^2" << endl;
                    break;
                default:
                    cout << "THERE IS NO SUCH FORMULA" << endl;
                    cout << "PLEASE CHOOSE EITHER 1 OR 2 OR 3" << endl;
            }
        } else {
            cout << "I THINK YOU TYPE THE WRONG VARIABLE" << endl;
        }
    } else if (motion==2){
        cout << "GLBB OPERATION" << endl;
        cout << "WHAT AXIS?" << endl;
        cout << "1) X-AXIS (HORIZONTAL)" << endl;
        cout << "2) Y-AXIS (VERTICAL)" << endl;
        cout << "1 OR 2? ";
        cin >> axis;
        cout << endl;

        if (axis==1){
            cout << "WHAT KINEMATIC EQUATION YOU WANT TO USE?" << endl;
            cout << "1) vf = vi + at" << endl;
            cout << "2) xf = xi + vit + 1/2(at^2)" << endl;
            cout << "3) vf^2 = vi^2 + 2a(xf - xi)" << endl;
            cout << "4) xf = xi + 1/2(vf - vi)" << endl;
            cout << "1 OR 2 OR 3 OR 4? ";
            cin >> Kinematic_Eq;
            cout << endl;

            if (Kinematic_Eq==1){
                cout << "WHAT DO YOU WANT TO FIND?" << endl;
                cout << "vf = 1, vi =2, a = 3, t = 4" << endl;
                cout << "1 OR 2 OR 3 OR 4? ";
                cin >> formula;
                cout << endl;
                switch (formula){
                    case(1):
                        cout << "ENTER THE MAGNITUDE OF vi (meter/second)= ";
                        cin >> vi;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        vf = vi + a*t;
                        cout << endl;
                        cout << "vf = vi + at = " << vi << "+" << a << "x" << t << " = " << vf << "m/s" << endl;
                        break;
                    case(2):
                        cout << "ENTER THE MAGNITUDE OF vf (meter/second)= ";
                        cin >> vf;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        vi = vf - a*t;
                        cout << endl;
                        cout << "vi = vf - at = " << vf << "-" << a << "x" << t << " = " << vi << "m/s" << endl;
                        break;
                    case(3):
                        cout << "ENTER THE MAGNITUDE OF vf (meter/second)= ";
                        cin >> vf;
                        cout << "ENTER THE MAGNITUDE OF vi (meter/second)= ";
                        cin >> vi;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        a = (vf - vi)/t;
                        cout << endl;
                        cout << "a = (vf - vi)/t = " << "(" << vf << "-" << vi << ")/" << t << " = " << a << "m/s^2" << endl;
                        break;
                    case (4):
                        cout << "ENTER THE MAGNITUDE OF vf (meter/second)= ";
                        cin >> vf;
                        cout << "ENTER THE MAGNITUDE OF vi (meter/second)= ";
                        cin >> vi;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        t = (vf - vi)/a;
                        cout << endl;
                        cout << "t = (vf - vi)/a = " << "(" << vf << "-" << vi << ")/" << a << " = " << t << "s" << endl;
                        break;
                    default:
                        cout << "THERE IS NO SUCH VARIABLE" << endl;
                        cout << "PLEASE CHOOSE EITHER 1 OR 2 OR 3 OR 4" << endl << endl;
                }
            } else if (Kinematic_Eq==2){
                cout << "WHAT DO YOU WANT TO FIND?" << endl;
                cout << "xf = 1, xi = 2, vi = 3, t = 4, a = 5" << endl;
                cout << "1 OR 2 OR 3 OR 4 OR 5? ";
                cin >> formula;
                cout << endl;
                switch(formula){
                    case(1):
                        cout << "ENTER THE MAGNITUDE OF xi (meter)= ";
                        cin >> xi;
                        cout << "ENTER THE MAGNITUDE OF vi (meter/second)= ";
                        cin >> vi;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        xf = xi + vi*t + a*t*t/2;
                        cout << endl;
                        cout << "xf = xi + vit + 1/2(at^2) = " << xi << " + " << vi << "x" << t << " + " << "1/2(" << a << "x" << t << "^2)" << " = " << xf << "m" << endl;
                        break;
                    case(2):
                        cout << "ENTER THE MAGNITUDE OF xf (meter)= ";
                        cin >> xf;
                        cout << "ENTER THE MAGNITUDE OF vi (meter/second)= ";
                        cin >> vi;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        xi = xf - vi*t - a*t*t/2;
                        cout << endl;
                        cout << "xi = xf + vit + 1/2(at^2) = " << xf << " - " << vi << "x" << t << " - " << "1/2(" << a << "x" << t << "^2)" << " = " << xi << "m" << endl;
                        break;
                    case(3):
                        cout << "ENTER THE MAGNITUDE OF xi (meter)= ";
                        cin >> xi;
                        cout << "ENTER THE MAGNITUDE OF xf (meter)= ";
                        cin >> xf;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        vi = (xf - xi - a*t*t/2)/t;
                        cout << endl;
                        cout << "vi = (xf - xi - 1/2(at^2))/t = (" << xf << " - " << xi << " - " << "1/2(" << a << "x" << t << "^2))" << "/" << t << " = " << vi << "m/s" << endl;
                        break;
                    case(4):
                        cout << "ENTER THE MAGNITUDE OF xi (meter)= ";
                        cin >> xi;
                        cout << "ENTER THE MAGNITUDE OF xf (meter)= ";
                        cin >> xf;
                        cout << "ENTER THE MAGNITUDE OF a [meter/(second)^2]= ";
                        cin >> a;
                        cout << "ENTER THE MAGNITUDE OF vi (meter/second)= ";
                        cin >> vi;
                        cout << endl;
                        cout << "t1 = {-vi + sqrt of [vi^2 + 2a(xf-xi)]}/a = {" << 0-vi << " + sqrt of [" << vi << "^2 + 2x" << a << "(" << xf << "-" << xi << ")]}/" << a << " = " << (0-vi + sqrt(vi*vi + 2*a*(xf-xi)))/a << "s" << endl;
                        cout << "t2 = {-vi - sqrt of [vi^2 + 2a(xf-xi)]}/a = {" << 0-vi << " - sqrt of [" << vi << "^2 + 2x" << a << "(" << xf << "-" << xi << ")]}/" << a << " = " << (0-vi - sqrt(vi*vi + 2*a*(xf-xi)))/a << "s" << endl << endl;
                        cout << "NOTE: PICK THE POSITIVE t & DISCARD THE NEGATIVE t" << endl << "BECAUSE 'TIME' WILL NEVER HAVE A NEGATIVE SIGN" << endl;
                        break;
                    case (5):
                        cout << "ENTER THE MAGNITUDE OF xf (meter)= ";
                        cin >> xf;
                        cout << "ENTER THE MAGNITUDE OF xi (meter)= ";
                        cin >> xi;
                        cout << "ENTER THE MAGNITUDE OF v (meter/second)= ";
                        cin >> v;
                        cout << "ENTER THE MAGNITUDE OF t (second)= ";
                        cin >> t;
                        a = (2*xf - 2*xi - 2*vi*t)/(t*t);
                        cout << endl;
                        cout << "a = [2(xf - xi - vit)]/t^2 = [2(" << xf << " - " << xi << " - " << vi << "x" << t << ")]/" << t << "^2 = " << a << "m/s^2" << endl;
                        break;
                    default:
                        cout << "THERE IS NO SUCH VARIABLE" << endl;
                        cout << "PLEASE CHOOSE EITHER 1 OR 2 OR 3 OR 4 OR 5" << endl << endl;
                }
            } else if (Kinematic_Eq==3){

            }
        }
    } else {
        cout << "THERE IS NO SUCH OPERATIONS" << endl;
    }
    cout << endl;
    cout << "THIS IS THE END OF THE PROGRAM" << endl;

    return 0;
}
