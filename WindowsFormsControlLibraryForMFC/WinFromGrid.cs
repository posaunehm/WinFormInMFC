using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsControlLibraryForMFC
{
    public partial class WinFromGrid: UserControl
    {
        public WinFromGrid()
        {
            InitializeComponent();
        }

        public void AddRow()
        {
            this.dataGridView.Rows.Add(5);
        }
    }
}
