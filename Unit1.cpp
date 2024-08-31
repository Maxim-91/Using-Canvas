//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
 Image1->Canvas->MoveTo(0,0);
 Image1->Canvas->LineTo(0,200);
 Image1->Canvas->MoveTo(100,0);
 Image1->Canvas->LineTo(0,100);
 Image1->Canvas->LineTo(100,200);
 Image1->Canvas->MoveTo(110,200);
 Image1->Canvas->LineTo(110,0);
 Image1->Canvas->LineTo(160,100);
 Image1->Canvas->LineTo(210,0);
 Image1->Canvas->LineTo(210,200);
 Image1->Canvas->MoveTo(320,0);
 Image1->Canvas->LineTo(270,0);
 Image1->Canvas->LineTo(220,50);
 Image1->Canvas->LineTo(220,150);
 Image1->Canvas->LineTo(270,200);
 Image1->Canvas->LineTo(320,200);
 Image1->Canvas->MoveTo(220,100);
 Image1->Canvas->LineTo(270,100);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BitBtn2Click(TObject *Sender)
{
float mx=15,my=15,x=StrToFloat(Edit1->Text),y,zx=220,zy=180,a=1;
 y=12*cos(12*x);
 Image2->Canvas->MoveTo(x*mx+zx,y*my+zy);
 StringGrid1->Cells[0][0]="x";
 StringGrid1->Cells[0][1]="y";
 for (x=StrToFloat(Edit1->Text);x<=StrToFloat(Edit2->Text);x+=StrToFloat(Edit3->Text))
 {
  StringGrid1->Cells[a][0]=x;
  StringGrid1->Cells[a][1]=y;
  y=12*cos(12*x);
  Image2->Canvas->LineTo(x*mx+zx,y*my+zy);
  StringGrid1->ColCount+=1;
  a++;
 }
 Image2->Canvas->MoveTo(0,180);
 Image2->Canvas->LineTo(450,180);
 Image2->Canvas->MoveTo(220,0);
 Image2->Canvas->LineTo(220,370);
 Image2->Canvas->MoveTo(450,180);
 Image2->Canvas->LineTo(440,190);
 Image2->Canvas->LineTo(440,170);
 Image2->Canvas->LineTo(450,180);
 Image2->Canvas->MoveTo(220,0);
 Image2->Canvas->LineTo(210,10);
 Image2->Canvas->LineTo(230,10);
 Image2->Canvas->LineTo(220,0);
 Image2->Canvas->TextOut(440,190,"x");
 Image2->Canvas->TextOut(200,10,"y");        
}
//---------------------------------------------------------------------------




