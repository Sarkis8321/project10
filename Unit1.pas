Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem5_Click(sender: Object; e: EventArgs);
    procedure toolStripMenuItem6_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    button2: Button;
    tabControl1: TabControl;
    tabPage1: TabPage;
    tabPage2: TabPage;
    menuStrip1: MenuStrip;
    toolStripMenuItem1: ToolStripMenuItem;
    toolStripMenuItem3: ToolStripMenuItem;
    toolStripMenuItem2: ToolStripMenuItem;
    toolStripMenuItem5: ToolStripMenuItem;
    toolStripMenuItem6: ToolStripMenuItem;
    textBox3: TextBox;
    textBox2: TextBox;
    comboBox1: ComboBox;
    comboBox2: ComboBox;
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
  
  try
    operation := 1;
    prev := StrToFloat(textbox1.Text);
    textbox1.Text := '';
  except
    on System.FormatException do
    textbox1.Text := 'Неверный формат ввода';
  else textbox1.Text := 'Ошибка';
  end;
  textbox1.Focus;
  
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  var res := 0.0;
  if operation = 1 then 
    res := prev + StrToFloat(textbox1.Text);
  
  textbox1.Focus;
  textbox1.Text := res.ToString;
  
end;

procedure Form1.toolStripMenuItem5_Click(sender: Object; e: EventArgs);
begin
  tabControl1.SelectedTab := tabPage1;
end;

procedure Form1.toolStripMenuItem6_Click(sender: Object; e: EventArgs);
begin
  tabControl1.SelectedTab := tabPage2;
end;

end.
