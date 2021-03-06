/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <gnuradio/qtgui/utils.h>
#include <qwt_legend.h>
#include <qwt_painter.h>
#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_magnifier.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_panner.h>
#include <qwt_plot_zoomer.h>
#include <qwt_scale_engine.h>
#include <qwt_scale_widget.h>
#include <qwt_symbol.h>

namespace py = pybind11;

#include <gnuradio/qtgui/edit_box_msg.h>
// pydoc.h is automatically generated in the build directory
#include <edit_box_msg_pydoc.h>

void bind_edit_box_msg(py::module& m)
{

    using edit_box_msg = ::gr::qtgui::edit_box_msg;


    py::class_<edit_box_msg, gr::block, gr::basic_block, std::shared_ptr<edit_box_msg>>(
        m, "edit_box_msg", D(edit_box_msg))

        .def(py::init(&edit_box_msg::make),
             py::arg("type"),
             py::arg("value") = "",
             py::arg("label") = "",
             py::arg("is_pair") = true,
             py::arg("is_static") = true,
             py::arg("key") = "",
             py::arg("parent") = __null,
             D(edit_box_msg, make))


        .def("exec_", &edit_box_msg::exec_, D(edit_box_msg, exec_))

        // .def("pyqwidget",&edit_box_msg::pyqwidget,
        //     D(edit_box_msg,pyqwidget)
        // )
        // For the sip conversion to python to work, the widget object
        // needs to be explicitly converted to long long.
        .def(
            "pyqwidget",
            [](std::shared_ptr<edit_box_msg> p) {
                return PyLong_AsLongLong(p->pyqwidget());
            },
            D(edit_box_msg, pyqwidget))


        .def("qwidget", &edit_box_msg::qwidget, D(edit_box_msg, qwidget))


        .def("pyqwidget", &edit_box_msg::pyqwidget, D(edit_box_msg, pyqwidget))

        ;
}
