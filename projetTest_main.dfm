object mainForm: TmainForm
  Left = 0
  Top = 0
  Caption = 'Application'
  ClientHeight = 420
  ClientWidth = 656
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu
  TextHeight = 15
  object Memo: TMemo
    Left = 0
    Top = 0
    Width = 656
    Height = 328
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'Memo')
    ParentFont = False
    ReadOnly = True
    TabOrder = 0
  end
  object Panel1: TPanel
    Left = 0
    Top = 328
    Width = 656
    Height = 92
    Align = alBottom
    TabOrder = 1
    object Label2: TLabel
      Left = 24
      Top = 16
      Width = 130
      Height = 20
      Caption = 'Ajouter au tableau :'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Label1: TLabel
      Left = 343
      Top = 16
      Width = 282
      Height = 20
      Caption = 'Indiquez la ligne '#224' modifier ou supprimer :'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object AddButton: TButton
      Left = 40
      Top = 42
      Width = 92
      Height = 33
      Cursor = crHandPoint
      Caption = 'Ajouter'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = AddButtonClick
    end
    object DeleteButton: TButton
      Left = 504
      Top = 51
      Width = 105
      Height = 33
      Cursor = crHandPoint
      Caption = 'Supprimer'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = DeleteButtonClick
    end
    object ModButton: TButton
      Left = 406
      Top = 51
      Width = 92
      Height = 33
      Cursor = crHandPoint
      Caption = 'Modifier'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = ModButtonClick
    end
    object supprEdit: TSpinEdit
      Left = 354
      Top = 54
      Width = 46
      Height = 30
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -15
      Font.Name = 'Segoe UI'
      Font.Style = []
      MaxValue = 0
      MinValue = 0
      ParentFont = False
      TabOrder = 3
      Value = 0
    end
  end
  object ActionList: TActionList
    Left = 256
    Top = 144
    object Open: TAction
      Category = 'Fichier'
      Caption = 'Ouvrir'
    end
    object Save: TAction
      Category = 'Fichier'
      Caption = 'Sauvegarder'
    end
    object FileOpen1: TFileOpen
      Category = 'File'
      Caption = 'Ou&vrir...'
      Hint = 'Ouvrir|Ouvre un fichier existant'
      ImageIndex = 7
      ShortCut = 16463
    end
    object FileSaveAs1: TFileSaveAs
      Category = 'File'
      Caption = 'Enre&gistrer sous...'
      Hint = 'Enregistrer sous|Enregistre le fichier actif sous un nouveau nom'
      ImageIndex = 30
    end
  end
  object MainMenu: TMainMenu
    Left = 408
    Top = 128
    object Menu1: TMenuItem
      Caption = 'Fichier'
      object Ouvrir1: TMenuItem
        Action = FileOpen1
      end
      object Sauvegarder1: TMenuItem
        Action = FileSaveAs1
      end
    end
    object TMenuItem
    end
    object TMenuItem
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 184
    Top = 232
  end
  object SaveDialog1: TSaveDialog
    Left = 448
    Top = 192
  end
  object XMLDocument: TXMLDocument
    FileName = 'C:\Users\dev\Documents\Embarcadero\Studio\Projets\xmlFile.xml'
    Left = 320
    Top = 224
    DOMVendorDesc = 'MSXML'
  end
end
