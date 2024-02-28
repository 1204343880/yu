using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace 作业
{
    public partial class Form1 : Form
    {
        private const int CircleSize = 50;
        private const int MoveStep = 5;
        private Point _circlePos;
        private Point _moveDir;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            var g = CreateGraphics();
            _circlePos = new Point(0, 0);
            _moveDir = new Point(MoveStep, MoveStep);
            g.DrawEllipse(Pens.Black, _circlePos.X, _circlePos.Y, CircleSize, CircleSize);
            timer1.Enabled = true;
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            _circlePos.X += _moveDir.X;
            _circlePos.Y += _moveDir.Y;
            if (_circlePos.X < 0 || _circlePos.X + CircleSize > ClientSize.Width)
            {
                _moveDir.X = -_moveDir.X;
            }
            if (_circlePos.Y < 0 || _circlePos.Y + CircleSize > ClientSize.Height)
            {
                _moveDir.Y = -_moveDir.Y;
            }
            var g = CreateGraphics();
            g.Clear(BackColor);
            g.DrawEllipse(Pens.Black, _circlePos.X, _circlePos.Y, CircleSize, CircleSize);
        }
    }
}

