/*
The MIT License (MIT)

Copyright (c) 2015 Tomasz Koziara

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include "parmes.h"
#include "macros.h"

/* output current state */
void output ()
{
  using namespace std;
  ostringstream oss;
  ofstream out;
  int i;

  oss << outpath << ".dump";
  out.open (oss.str().c_str(), ios::app);

  out << "ITEM: TIMESTEP\n";
  out << curtime << "\n";
  out << "ITEM: NUMBER OF ATOMS\n";
  out << ellnum << "\n";
  out << "ITEM: BOX BOUNDS\n";
  out << "0 1\n";
  out << "0 1\n";
  out << "0 1\n";
  out << "ITEM: ATOMS id x y z radius\n";
  for (i = 0; i < ellnum; i ++)
  {
    out << i+1 << " " << center[0][i] << " " << center[1][i] << " " << center[2][i] << " " <<  radii[0][i] << "\n";
  }

  out.close();
}
