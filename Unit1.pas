Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    button2: Button;
    textBox1: TextBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;
  var operation := 0;
  var prev := 0.0;
    
implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  operation := 1;
  prev := StrToFloat(textbox1.Text);
  textbox1.Text := '';
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  
end;

end.
