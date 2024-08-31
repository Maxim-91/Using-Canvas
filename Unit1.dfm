object Form1: TForm1
  Left = -130
  Top = 96
  Width = 799
  Height = 545
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 152
    Top = 8
    Width = 86
    Height = 13
    Caption = #1044#1072#1085#1110' '#1076#1083#1103' '#1075#1088#1072#1092#1110#1082#1072
  end
  object Label2: TLabel
    Left = 40
    Top = 40
    Width = 23
    Height = 13
    Caption = 'Xmin'
  end
  object Label3: TLabel
    Left = 136
    Top = 40
    Width = 26
    Height = 13
    Caption = 'Xmax'
  end
  object Label4: TLabel
    Left = 240
    Top = 40
    Width = 13
    Height = 13
    Caption = 'dX'
  end
  object Image1: TImage
    Left = 8
    Top = 64
    Width = 321
    Height = 201
  end
  object Image2: TImage
    Left = 328
    Top = 0
    Width = 457
    Height = 393
  end
  object Label5: TLabel
    Left = 0
    Top = 344
    Width = 53
    Height = 13
    Caption = #1050#1086#1090#1083#1091#1073#1072#1108#1074
  end
  object Edit1: TEdit
    Left = 64
    Top = 32
    Width = 65
    Height = 21
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 168
    Top = 32
    Width = 65
    Height = 21
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 256
    Top = 32
    Width = 65
    Height = 21
    TabOrder = 2
  end
  object StringGrid1: TStringGrid
    Left = 8
    Top = 432
    Width = 777
    Height = 73
    ColCount = 2
    RowCount = 2
    FixedRows = 0
    TabOrder = 3
  end
  object BitBtn1: TBitBtn
    Left = 120
    Top = 272
    Width = 75
    Height = 25
    Caption = #1050#1052#1028
    TabOrder = 4
    OnClick = BitBtn1Click
  end
  object BitBtn2: TBitBtn
    Left = 560
    Top = 400
    Width = 75
    Height = 25
    Caption = #1043#1088#1072#1092#1110#1082
    TabOrder = 5
    OnClick = BitBtn2Click
  end
end
