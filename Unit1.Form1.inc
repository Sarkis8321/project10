procedure InitializeComponent;
    begin
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.SuspendLayout();
        // 
        // textBox1
        // 
        self.textBox1.Font := new System.Drawing.Font('Arial', 15.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.Location := new System.Drawing.Point(37, 37);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(260, 32);
        self.textBox1.TabIndex := 0;
        // 
        // button1
        // 
        self.button1.Font := new System.Drawing.Font('Microsoft Sans Serif', 15.75, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.button1.Location := new System.Drawing.Point(256, 92);
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
        self.button2.Location := new System.Drawing.Point(256, 179);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(41, 33);
        self.button2.TabIndex := 2;
        self.button2.Text := '=';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(334, 461);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.textBox1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedToolWindow;
        self.Name := 'Form1';
        self.Text := 'Калькулятор от разрабов';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
