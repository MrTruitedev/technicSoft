object AddForme: TAddForme
  Left = 0
  Top = 0
  Caption = 'Formulaire d'#39'ajout'
  ClientHeight = 299
  ClientWidth = 347
  Color = clBtnFace
  Constraints.MaxHeight = 338
  Constraints.MaxWidth = 363
  Constraints.MinHeight = 338
  Constraints.MinWidth = 363
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 96
    Top = 8
    Width = 175
    Height = 20
    Caption = 'Saisissez un nombre entier'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 122
    Top = 107
    Width = 110
    Height = 20
    Caption = 'Saisissez le texte'
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
    Caption = 'Saisissez la date'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object StringInput: TEdit
    Left = 16
    Top = 133
    Width = 329
    Height = 23
    MaxLength = 50
    TabOrder = 0
  end
  object AddButton: TButton
    Left = 40
    Top = 272
    Width = 83
    Height = 33
    Cursor = crHandPoint
    Caption = 'Ajouter'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = AddButtonClick
  end
  object UndoButton: TButton
    Left = 232
    Top = 272
    Width = 81
    Height = 33
    Cursor = crHandPoint
    Caption = 'Annuler'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = UndoButtonClick
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
    TabOrder = 3
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
    TabOrder = 4
    Value = 0
  end
  object ModButton: TButton
    Left = 40
    Top = 272
    Width = 83
    Height = 33
    Cursor = crHandPoint
    Caption = 'Modifier'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    Visible = False
    OnClick = ModButtonClick
  end
end
