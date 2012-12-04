object frmVoglet: TfrmVoglet
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Voglet'
  ClientHeight = 98
  ClientWidth = 299
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object btnStart: TButton
    Left = 8
    Top = 51
    Width = 75
    Height = 25
    Caption = 'start'
    TabOrder = 0
    OnClick = btnStartClick
  end
  object btnStop: TButton
    Left = 103
    Top = 51
    Width = 75
    Height = 25
    Caption = 'stop'
    TabOrder = 1
    OnClick = btnStopClick
  end
  object edtTime: TEdit
    Left = 8
    Top = 8
    Width = 89
    Height = 21
    TabOrder = 2
    Text = '2'
  end
  object rbSec: TRadioButton
    Left = 120
    Top = 8
    Width = 113
    Height = 17
    Caption = 'seconds'
    TabOrder = 3
  end
  object rbMin: TRadioButton
    Left = 120
    Top = 28
    Width = 113
    Height = 17
    Caption = 'minutes'
    TabOrder = 4
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 256
    Top = 8
  end
end
