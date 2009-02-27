using System;
using MyGUI.Sharp;

namespace TestApp.Sharp
{
    public class Test_ScrollView
    {
        public static void Test()
        {
            ScrollView view = new ScrollView(IntPtr.Zero, WidgetStyle.Overlapped, "ScrollView", new IntCoord(420, 120, 100, 100), Align.Default, "Overlapped", "");

            view.SetCanvasSize(210, 210);
            view.CanvasSize = new IntSize(211, 211);
            IntSize size = view.CanvasSize;

            view.CanvasAlign = Align.Center;

            view.VisibleHScroll = !view.VisibleHScroll;
            view.VisibleVScroll = !view.VisibleVScroll;

        }
    }
}
