procedure InitializeComponent;
    begin
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.tabPage2 := new System.Windows.Forms.TabPage();
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.toolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem3 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem2 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem5 := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripMenuItem6 := new System.Windows.Forms.ToolStripMenuItem();
        self.textBox2 := new System.Windows.Forms.TextBox();
        self.textBox3 := new System.Windows.Forms.TextBox();
        self.comboBox1 := new System.Windows.Forms.ComboBox();
        self.comboBox2 := new System.Windows.Forms.ComboBox();
        self.tabControl1.SuspendLayout();
        self.tabPage1.SuspendLayout();
        self.tabPage2.SuspendLayout();
        self.menuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.Font := new System.Drawing.Font('Arial', 15.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(6, 19);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(260, 32);
        self.textBox1.TabIndex := 0;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(225, 57);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(41, 33);
        self.button1.TabIndex := 1;
        self.button1.Text := '+';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button2.Location := new System.Drawing.Point(225, 96);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(41, 33);
        self.button2.TabIndex := 2;
        self.button2.Text := '=';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // tabControl1
        // 
        self.tabControl1.Alignment := System.Windows.Forms.TabAlignment.Bottom;
        self.tabControl1.Controls.Add(self.tabPage1);
        self.tabControl1.Controls.Add(self.tabPage2);
        self.tabControl1.Location := new System.Drawing.Point(2, 27);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(334, 435);
        self.tabControl1.TabIndex := 3;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.textBox1);
        self.tabPage1.Controls.Add(self.button2);
        self.tabPage1.Controls.Add(self.button1);
        self.tabPage1.Location := new System.Drawing.Point(4, 4);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(326, 409);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'tabPage1';
        self.tabPage1.UseVisualStyleBackColor := true;
        // 
        // tabPage2
        // 
        self.tabPage2.Controls.Add(self.comboBox2);
        self.tabPage2.Controls.Add(self.comboBox1);
        self.tabPage2.Controls.Add(self.textBox3);
        self.tabPage2.Controls.Add(self.textBox2);
        self.tabPage2.Location := new System.Drawing.Point(4, 4);
        self.tabPage2.Name := 'tabPage2';
        self.tabPage2.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage2.Size := new System.Drawing.Size(326, 409);
        self.tabPage2.TabIndex := 1;
        self.tabPage2.Text := 'tabPage2';
        self.tabPage2.UseVisualStyleBackColor := true;
        // 
        // menuStrip1
        // 
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem1, self.toolStripMenuItem2));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.Size := new System.Drawing.Size(334, 24);
        self.menuStrip1.TabIndex := 4;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // toolStripMenuItem1
        // 
        self.toolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripMenuItem3));
        self.toolStripMenuItem1.Name := 'toolStripMenuItem1';
        self.toolStripMenuItem1.Size := new System.Drawing.Size(48, 20);
        self.toolStripMenuItem1.Text := 'Файл';
        // 
        // toolStripMenuItem3
        // 
        self.toolStripMenuItem3.Name := 'toolStripMenuItem3';
        self.toolStripMenuItem3.Size := new System.Drawing.Size(118, 22);
        self.toolStripMenuItem3.Text := 'закрыть';
        // 
        // toolStripMenuItem2
        // 
        self.toolStripMenuItem2.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripMenuItem5, self.toolStripMenuItem6));
        self.toolStripMenuItem2.Name := 'toolStripMenuItem2';
        self.toolStripMenuItem2.Size := new System.Drawing.Size(87, 20);
        self.toolStripMenuItem2.Text := 'Программы';
        // 
        // toolStripMenuItem5
        // 
        self.toolStripMenuItem5.Name := 'toolStripMenuItem5';
        self.toolStripMenuItem5.Size := new System.Drawing.Size(186, 22);
        self.toolStripMenuItem5.Text := 'Калькулятор';
        self.toolStripMenuItem5.Click += toolStripMenuItem5_Click;
        // 
        // toolStripMenuItem6
        // 
        self.toolStripMenuItem6.Name := 'toolStripMenuItem6';
        self.toolStripMenuItem6.Size := new System.Drawing.Size(186, 22);
        self.toolStripMenuItem6.Text := 'Системы счисления';
        self.toolStripMenuItem6.Click += toolStripMenuItem6_Click;
        // 
        // textBox2
        // 
        self.textBox2.Location := new System.Drawing.Point(34, 38);
        self.textBox2.Name := 'textBox2';
        self.textBox2.Size := new System.Drawing.Size(244, 20);
        self.textBox2.TabIndex := 0;
        // 
        // textBox3
        // 
        self.textBox3.Location := new System.Drawing.Point(34, 134);
        self.textBox3.Name := 'textBox3';
        self.textBox3.Size := new System.Drawing.Size(244, 20);
        self.textBox3.TabIndex := 1;
        // 
        // comboBox1
        // 
        self.comboBox1.FormattingEnabled := true;
        self.comboBox1.Location := new System.Drawing.Point(34, 64);
        self.comboBox1.Name := 'comboBox1';
        self.comboBox1.Size := new System.Drawing.Size(121, 21);
        self.comboBox1.TabIndex := 3;
        // 
        // comboBox2
        // 
        self.comboBox2.FormattingEnabled := true;
        self.comboBox2.Location := new System.Drawing.Point(34, 160);
        self.comboBox2.Name := 'comboBox2';
        self.comboBox2.Size := new System.Drawing.Size(121, 21);
        self.comboBox2.TabIndex := 4;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(334, 461);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.menuStrip1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.MainMenuStrip := self.menuStrip1;
        self.Name := 'Form1';
        self.Text := 'Калькулятор от разрабов';
        self.tabControl1.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.tabPage1.PerformLayout();
        self.tabPage2.ResumeLayout(false);
        self.tabPage2.PerformLayout();
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
