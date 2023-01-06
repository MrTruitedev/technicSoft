object ModForme: TModForme
  Left = 0
  Top = 0
  Caption = 'Modifier un objet'
  ClientHeight = 338
  ClientWidth = 363
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 114
    Top = 16
    Width = 129
    Height = 20
    Caption = 'Modifier le nombre'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object label2: TLabel
    Left = 122
    Top = 107
    Width = 110
    Height = 20
    Caption = 'Modifier le texte'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 125
    Top = 184
    Width = 107
    Height = 20
    Caption = 'Modifier la date'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object IntInput: TSpinEdit
    Left = 122
    Top = 56
    Width = 121
    Height = 27
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    MaxValue = 0
    MinValue = 0
    ParentFont = False
    TabOrder = 0
    Value = 0
  end
  object StringInput: TEdit
    Left = 16
    Top = 133
    Width = 329
    Height = 23
    MaxLength = 50
    TabOrder = 1
  end
  object DateInput: TDateTimePicker
    Left = 122
    Top = 224
    Width = 121
    Height = 25
    Date = 44928.000000000000000000
    Time = 0.727527870367339300
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object AddButton: TButton
    Left = 40
    Top = 272
    Width = 83
    Height = 33
    Caption = 'Modifier'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = ModButtonClick
  end
  object UndoButton: TButton
    Left = 232
    Top = 272
    Width = 81
    Height = 33
    Caption = 'Annuler'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = UndoButtonClick
  end
end
