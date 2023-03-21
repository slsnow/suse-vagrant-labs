/* Generated code for Python module 'argcomplete.packages._argparse'
 * created by Nuitka version 1.5.3
 *
 * This code is in part copyright 2022 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_argcomplete$packages$_argparse" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_argcomplete$packages$_argparse;
PyDictObject *moduledict_argcomplete$packages$_argparse;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[139];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[139];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("argcomplete.packages._argparse"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 139; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_argcomplete$packages$_argparse(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 139; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5f12fb46b610338c6e51c7bf8085a18c;
static PyCodeObject *codeobj_67dfafb828d7a6f141a174df648c0667;
static PyCodeObject *codeobj_f48bda14cbb115b3f0aa290f984d7ee0;
static PyCodeObject *codeobj_7d0cc20e679f914a5703a7a00e3c94e1;
static PyCodeObject *codeobj_ad4511cfa9413a466843119d0a9bce92;
static PyCodeObject *codeobj_84ee76a51b20ef4bf3244bfad1d5c646;
static PyCodeObject *codeobj_4c7bf4387f88015319ef10d758dfdf13;
static PyCodeObject *codeobj_46b49f55a4313417382b24adf2e6afbf;
static PyCodeObject *codeobj_fcb2f16696fa15bf2331a114e20d463c;
static PyCodeObject *codeobj_1e82958c679c817a02be10382dff50c7;
static PyCodeObject *codeobj_3b841b726105f2bf74e0af17e7e0c711;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[124]); CHECK_OBJECT(module_filename_obj);
    codeobj_5f12fb46b610338c6e51c7bf8085a18c = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[126], NULL, 1, 0, 0);
    codeobj_67dfafb828d7a6f141a174df648c0667 = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[127], NULL, 1, 0, 0);
    codeobj_f48bda14cbb115b3f0aa290f984d7ee0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_7d0cc20e679f914a5703a7a00e3c94e1 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[129], NULL, 0, 0, 0);
    codeobj_ad4511cfa9413a466843119d0a9bce92 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[130], NULL, 3, 0, 0);
    codeobj_84ee76a51b20ef4bf3244bfad1d5c646 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[131], NULL, 2, 0, 0);
    codeobj_4c7bf4387f88015319ef10d758dfdf13 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[132], NULL, 1, 0, 0);
    codeobj_46b49f55a4313417382b24adf2e6afbf = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[132], NULL, 1, 0, 0);
    codeobj_fcb2f16696fa15bf2331a114e20d463c = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[133], mod_consts[134], 1, 0, 0);
    codeobj_1e82958c679c817a02be10382dff50c7 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[48], mod_consts[135], mod_consts[136], 1, 0, 0);
    codeobj_3b841b726105f2bf74e0af17e7e0c711 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[43], mod_consts[137], mod_consts[138], 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__1_action_is_satisfied();


static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__2_action_is_open();


static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__3_action_is_greedy(PyObject *defaults);


static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args();


static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__1_take_action(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__2_consume_optional(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__3_consume_positionals(struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_argcomplete$packages$_argparse$$$function__1_action_is_satisfied(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_action = python_pars[0];
    PyObject *var_num_consumed_args = NULL;
    struct Nuitka_FrameObject *frame_46b49f55a4313417382b24adf2e6afbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_46b49f55a4313417382b24adf2e6afbf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_46b49f55a4313417382b24adf2e6afbf)) {
        Py_XDECREF(cache_frame_46b49f55a4313417382b24adf2e6afbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_46b49f55a4313417382b24adf2e6afbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_46b49f55a4313417382b24adf2e6afbf = MAKE_FUNCTION_FRAME(codeobj_46b49f55a4313417382b24adf2e6afbf, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_46b49f55a4313417382b24adf2e6afbf->m_type_description == NULL);
    frame_46b49f55a4313417382b24adf2e6afbf = cache_frame_46b49f55a4313417382b24adf2e6afbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_46b49f55a4313417382b24adf2e6afbf);
    assert(Py_REFCNT(frame_46b49f55a4313417382b24adf2e6afbf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_action);
        tmp_args_element_value_1 = par_action;
        tmp_args_element_value_2 = mod_consts[2];
        frame_46b49f55a4313417382b24adf2e6afbf->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_num_consumed_args == NULL);
        var_num_consumed_args = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_action);
        tmp_expression_value_2 = par_action;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_action);
        tmp_expression_value_3 = par_action;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_num_consumed_args);
        tmp_cmp_expr_left_3 = var_num_consumed_args;
        tmp_cmp_expr_right_3 = mod_consts[8];
        tmp_return_value = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_action);
        tmp_expression_value_4 = par_action;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_action);
        tmp_expression_value_5 = par_action;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_num_consumed_args);
        tmp_cmp_expr_left_6 = var_num_consumed_args;
        tmp_cmp_expr_right_6 = mod_consts[8];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_action);
        tmp_expression_value_6 = par_action;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_7;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_mod_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_action);
        tmp_expression_value_7 = par_action;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 42;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_num_consumed_args);
        tmp_cmp_expr_left_7 = var_num_consumed_args;
        CHECK_OBJECT(par_action);
        tmp_expression_value_8 = par_action;
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[3]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_46b49f55a4313417382b24adf2e6afbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_46b49f55a4313417382b24adf2e6afbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_46b49f55a4313417382b24adf2e6afbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_46b49f55a4313417382b24adf2e6afbf,
        type_description_1,
        par_action,
        var_num_consumed_args
    );


    // Release cached frame if used for exception.
    if (frame_46b49f55a4313417382b24adf2e6afbf == cache_frame_46b49f55a4313417382b24adf2e6afbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_46b49f55a4313417382b24adf2e6afbf);
        cache_frame_46b49f55a4313417382b24adf2e6afbf = NULL;
    }

    assertFrameObject(frame_46b49f55a4313417382b24adf2e6afbf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_consumed_args);
    Py_DECREF(var_num_consumed_args);
    var_num_consumed_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_num_consumed_args);
    var_num_consumed_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_argcomplete$packages$_argparse$$$function__2_action_is_open(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_action = python_pars[0];
    PyObject *var_num_consumed_args = NULL;
    struct Nuitka_FrameObject *frame_4c7bf4387f88015319ef10d758dfdf13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4c7bf4387f88015319ef10d758dfdf13 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4c7bf4387f88015319ef10d758dfdf13)) {
        Py_XDECREF(cache_frame_4c7bf4387f88015319ef10d758dfdf13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c7bf4387f88015319ef10d758dfdf13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c7bf4387f88015319ef10d758dfdf13 = MAKE_FUNCTION_FRAME(codeobj_4c7bf4387f88015319ef10d758dfdf13, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c7bf4387f88015319ef10d758dfdf13->m_type_description == NULL);
    frame_4c7bf4387f88015319ef10d758dfdf13 = cache_frame_4c7bf4387f88015319ef10d758dfdf13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c7bf4387f88015319ef10d758dfdf13);
    assert(Py_REFCNT(frame_4c7bf4387f88015319ef10d758dfdf13) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_action);
        tmp_args_element_value_1 = par_action;
        tmp_args_element_value_2 = mod_consts[2];
        frame_4c7bf4387f88015319ef10d758dfdf13->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_num_consumed_args == NULL);
        var_num_consumed_args = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_action);
        tmp_expression_value_2 = par_action;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 2, tmp_list_element_1);
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto list_build_exception_1;
        }
        PyList_SET_ITEM0(tmp_cmp_expr_right_1, 3, tmp_list_element_1);
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_action);
        tmp_expression_value_3 = par_action;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_action);
        tmp_expression_value_4 = par_action;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_num_consumed_args);
        tmp_cmp_expr_left_4 = var_num_consumed_args;
        tmp_cmp_expr_right_4 = mod_consts[2];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_action);
        tmp_expression_value_5 = par_action;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_6;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_mod_expr_left_1 = mod_consts[10];
        CHECK_OBJECT(par_action);
        tmp_expression_value_6 = par_action;
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 55;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_num_consumed_args);
        tmp_cmp_expr_left_5 = var_num_consumed_args;
        CHECK_OBJECT(par_action);
        tmp_expression_value_7 = par_action;
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c7bf4387f88015319ef10d758dfdf13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c7bf4387f88015319ef10d758dfdf13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c7bf4387f88015319ef10d758dfdf13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c7bf4387f88015319ef10d758dfdf13,
        type_description_1,
        par_action,
        var_num_consumed_args
    );


    // Release cached frame if used for exception.
    if (frame_4c7bf4387f88015319ef10d758dfdf13 == cache_frame_4c7bf4387f88015319ef10d758dfdf13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c7bf4387f88015319ef10d758dfdf13);
        cache_frame_4c7bf4387f88015319ef10d758dfdf13 = NULL;
    }

    assertFrameObject(frame_4c7bf4387f88015319ef10d758dfdf13);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_consumed_args);
    Py_DECREF(var_num_consumed_args);
    var_num_consumed_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_num_consumed_args);
    var_num_consumed_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_argcomplete$packages$_argparse$$$function__3_action_is_greedy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_action = python_pars[0];
    PyObject *par_isoptional = python_pars[1];
    PyObject *var_num_consumed_args = NULL;
    struct Nuitka_FrameObject *frame_84ee76a51b20ef4bf3244bfad1d5c646;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_84ee76a51b20ef4bf3244bfad1d5c646 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_84ee76a51b20ef4bf3244bfad1d5c646)) {
        Py_XDECREF(cache_frame_84ee76a51b20ef4bf3244bfad1d5c646);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84ee76a51b20ef4bf3244bfad1d5c646 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84ee76a51b20ef4bf3244bfad1d5c646 = MAKE_FUNCTION_FRAME(codeobj_84ee76a51b20ef4bf3244bfad1d5c646, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84ee76a51b20ef4bf3244bfad1d5c646->m_type_description == NULL);
    frame_84ee76a51b20ef4bf3244bfad1d5c646 = cache_frame_84ee76a51b20ef4bf3244bfad1d5c646;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84ee76a51b20ef4bf3244bfad1d5c646);
    assert(Py_REFCNT(frame_84ee76a51b20ef4bf3244bfad1d5c646) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_action);
        tmp_args_element_value_1 = par_action;
        tmp_args_element_value_2 = mod_consts[2];
        frame_84ee76a51b20ef4bf3244bfad1d5c646->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_num_consumed_args == NULL);
        var_num_consumed_args = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_action);
        tmp_expression_value_2 = par_action;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_isoptional);
        tmp_operand_value_1 = par_isoptional;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_action);
        tmp_args_element_value_3 = par_action;
        frame_84ee76a51b20ef4bf3244bfad1d5c646->m_frame.f_lineno = 66;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_action);
        tmp_expression_value_3 = par_action;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_action);
        tmp_expression_value_4 = par_action;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(var_num_consumed_args);
        tmp_cmp_expr_left_3 = var_num_consumed_args;
        tmp_cmp_expr_right_3 = mod_consts[8];
        tmp_and_right_value_2 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_return_value = tmp_and_left_value_2;
        and_end_2:;
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84ee76a51b20ef4bf3244bfad1d5c646, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84ee76a51b20ef4bf3244bfad1d5c646->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84ee76a51b20ef4bf3244bfad1d5c646, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84ee76a51b20ef4bf3244bfad1d5c646,
        type_description_1,
        par_action,
        par_isoptional,
        var_num_consumed_args
    );


    // Release cached frame if used for exception.
    if (frame_84ee76a51b20ef4bf3244bfad1d5c646 == cache_frame_84ee76a51b20ef4bf3244bfad1d5c646) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84ee76a51b20ef4bf3244bfad1d5c646);
        cache_frame_84ee76a51b20ef4bf3244bfad1d5c646 = NULL;
    }

    assertFrameObject(frame_84ee76a51b20ef4bf3244bfad1d5c646);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_num_consumed_args);
    Py_DECREF(var_num_consumed_args);
    var_num_consumed_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_num_consumed_args);
    var_num_consumed_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_isoptional);
    Py_DECREF(par_isoptional);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_isoptional);
    Py_DECREF(par_isoptional);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_argcomplete$packages$_argparse$$$function__4__parse_known_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_arg_strings = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_namespace = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *var_action_conflicts = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_seen_actions = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_seen_non_default_actions = Nuitka_Cell_Empty();
    PyObject *var_mutex_group = NULL;
    PyObject *var_group_actions = NULL;
    PyObject *var_i = NULL;
    PyObject *var_mutex_action = NULL;
    PyObject *var_conflicts = NULL;
    struct Nuitka_CellObject *var_option_string_indices = Nuitka_Cell_Empty();
    PyObject *var_arg_string_pattern_parts = NULL;
    PyObject *var_arg_strings_iter = NULL;
    PyObject *var_arg_string = NULL;
    PyObject *var_option_tuple = NULL;
    PyObject *var_pattern = NULL;
    struct Nuitka_CellObject *var_arg_strings_pattern = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_take_action = Nuitka_Cell_Empty();
    PyObject *var_consume_optional = NULL;
    struct Nuitka_CellObject *var_positionals = Nuitka_Cell_Empty();
    PyObject *var_consume_positionals = NULL;
    struct Nuitka_CellObject *var_extras = Nuitka_Cell_Empty();
    PyObject *var_start_index = NULL;
    PyObject *var_max_option_string_index = NULL;
    PyObject *var_next_option_string_index = NULL;
    PyObject *var_positionals_end_index = NULL;
    PyObject *var_strings = NULL;
    PyObject *var_stop_index = NULL;
    PyObject *var_action = NULL;
    PyObject *var_name = NULL;
    PyObject *var_group = NULL;
    PyObject *var_names = NULL;
    PyObject *var_msg = NULL;
    PyObject *outline_0_var_index = NULL;
    PyObject *outline_1_var_action = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    nuitka_bool tmp_for_loop_7__break_indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ad4511cfa9413a466843119d0a9bce92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    int tmp_res;
    struct Nuitka_FrameObject *frame_67dfafb828d7a6f141a174df648c0667_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_67dfafb828d7a6f141a174df648c0667_2 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    struct Nuitka_FrameObject *frame_5f12fb46b610338c6e51c7bf8085a18c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ad4511cfa9413a466843119d0a9bce92 = NULL;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad4511cfa9413a466843119d0a9bce92)) {
        Py_XDECREF(cache_frame_ad4511cfa9413a466843119d0a9bce92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad4511cfa9413a466843119d0a9bce92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad4511cfa9413a466843119d0a9bce92 = MAKE_FUNCTION_FRAME(codeobj_ad4511cfa9413a466843119d0a9bce92, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad4511cfa9413a466843119d0a9bce92->m_type_description == NULL);
    frame_ad4511cfa9413a466843119d0a9bce92 = cache_frame_ad4511cfa9413a466843119d0a9bce92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad4511cfa9413a466843119d0a9bce92);
    assert(Py_REFCNT(frame_ad4511cfa9413a466843119d0a9bce92) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_namespace));
        tmp_assattr_value_1 = Nuitka_Cell_GET(par_namespace);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_called_instance_1 = Nuitka_Cell_GET(par_self);
        CHECK_OBJECT(Nuitka_Cell_GET(par_arg_strings));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_arg_strings);
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[20], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_arg_strings);
            PyCell_SET(par_arg_strings, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_action_conflicts) == NULL);
        PyCell_SET(var_action_conflicts, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_action_conflicts));
        tmp_assattr_value_3 = Nuitka_Cell_GET(var_action_conflicts);
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_assattr_target_3 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[21], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_3 = Nuitka_Cell_GET(par_self);
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                exception_lineno = 90;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_mutex_group;
            var_mutex_group = tmp_assign_source_5;
            Py_INCREF(var_mutex_group);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_mutex_group);
        tmp_expression_value_4 = var_mutex_group;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_group_actions;
            var_group_actions = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_mutex_group);
        tmp_expression_value_5 = var_mutex_group;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_2;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 92;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                exception_lineno = 92;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 92;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 92;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccccccooooocoooooccococooooooooooo";
                    exception_lineno = 92;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 92;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_12;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_mutex_action;
            var_mutex_action = tmp_assign_source_13;
            Py_INCREF(var_mutex_action);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(var_action_conflicts) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(var_action_conflicts);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_mutex_action);
        tmp_args_element_value_3 = var_mutex_action;
        tmp_args_element_value_4 = MAKE_LIST_EMPTY(0);
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_conflicts;
            var_conflicts = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_conflicts);
        tmp_expression_value_7 = var_conflicts;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[27]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_group_actions);
        tmp_expression_value_8 = var_group_actions;
        CHECK_OBJECT(var_i);
        tmp_stop_value_1 = var_i;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 94;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 94;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_conflicts);
        tmp_expression_value_9 = var_conflicts;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_group_actions);
        tmp_expression_value_10 = var_group_actions;
        CHECK_OBJECT(var_i);
        tmp_add_expr_left_1 = var_i;
        tmp_add_expr_right_1 = mod_consts[8];
        tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_start_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 95;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
        Py_DECREF(tmp_start_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 95;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 95;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 92;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 90;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(Nuitka_Cell_GET(var_option_string_indices) == NULL);
        PyCell_SET(var_option_string_indices, tmp_assign_source_15);

    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
        assert(var_arg_string_pattern_parts == NULL);
        var_arg_string_pattern_parts = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        if (Nuitka_Cell_GET(par_arg_strings) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_4 = Nuitka_Cell_GET(par_arg_strings);
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arg_strings_iter == NULL);
        var_arg_strings_iter = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_arg_strings_iter);
        tmp_args_element_value_7 = var_arg_strings_iter;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 103;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_18;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                exception_lineno = 103;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_3__iter_value;
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 103;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 103;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ccccccooooocoooooccococooooooooooo";
                    exception_lineno = 103;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 103;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_23;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_arg_string;
            var_arg_string = tmp_assign_source_24;
            Py_INCREF(var_arg_string);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_arg_string);
        tmp_cmp_expr_left_2 = var_arg_string;
        tmp_cmp_expr_right_2 = mod_consts[29];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_4;
        if (var_arg_string_pattern_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_11 = var_arg_string_pattern_parts;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[31]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 106;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[32]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_7;
        if (var_arg_strings_iter == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }

        tmp_iter_arg_7 = var_arg_strings_iter;
        tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                exception_lineno = 107;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_27 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_arg_string;
            var_arg_string = tmp_assign_source_27;
            Py_INCREF(var_arg_string);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_5;
        if (var_arg_string_pattern_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_12 = var_arg_string_pattern_parts;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[31]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_9;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 108;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[34]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 107;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_8;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 113;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(par_self);
        CHECK_OBJECT(var_arg_string);
        tmp_args_element_value_8 = var_arg_string;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 113;
        tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[36], tmp_args_element_value_8);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_option_tuple;
            var_option_tuple = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_option_tuple);
        tmp_cmp_expr_left_3 = var_option_tuple;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[37];
        {
            PyObject *old = var_pattern;
            var_pattern = tmp_assign_source_29;
            Py_INCREF(var_pattern);
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_option_tuple);
        tmp_ass_subvalue_1 = var_option_tuple;
        if (Nuitka_Cell_GET(var_option_string_indices) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 117;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }

        tmp_ass_subscribed_1 = Nuitka_Cell_GET(var_option_string_indices);
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_1 = var_i;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[39];
        {
            PyObject *old = var_pattern;
            var_pattern = tmp_assign_source_30;
            Py_INCREF(var_pattern);
            Py_XDECREF(old);
        }

    }
    branch_end_3:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        if (var_arg_string_pattern_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_13 = var_arg_string_pattern_parts;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[31]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_pattern);
        tmp_args_element_value_9 = var_pattern;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 119;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 103;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[40];
        if (var_arg_string_pattern_parts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_arg_string_pattern_parts;
        tmp_assign_source_31 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_arg_strings_pattern) == NULL);
        PyCell_SET(var_arg_strings_pattern, tmp_assign_source_31);

    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = PySet_New(NULL);
        assert(Nuitka_Cell_GET(var_seen_actions) == NULL);
        PyCell_SET(var_seen_actions, tmp_assign_source_32);

    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PySet_New(NULL);
        assert(Nuitka_Cell_GET(var_seen_non_default_actions) == NULL);
        PyCell_SET(var_seen_non_default_actions, tmp_assign_source_33);

    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_seen_non_default_actions));
        tmp_assattr_value_4 = Nuitka_Cell_GET(var_seen_non_default_actions);
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[41], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[5];
        tmp_defaults_1 = mod_consts[42];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = var_action_conflicts;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_namespace;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_seen_actions;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_seen_non_default_actions;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_self;
        Py_INCREF(tmp_closure_1[4]);

        tmp_assign_source_34 = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__1_take_action(tmp_defaults_1, tmp_closure_1);

        assert(Nuitka_Cell_GET(var_take_action) == NULL);
        PyCell_SET(var_take_action, tmp_assign_source_34);

    }
    {
        PyObject *tmp_assign_source_35;
        struct Nuitka_CellObject *tmp_closure_2[6];

        tmp_closure_2[0] = par_arg_strings;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_arg_strings_pattern;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_extras;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = var_option_string_indices;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = par_self;
        Py_INCREF(tmp_closure_2[4]);
        tmp_closure_2[5] = var_take_action;
        Py_INCREF(tmp_closure_2[5]);

        tmp_assign_source_35 = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__2_consume_optional(tmp_closure_2);

        assert(var_consume_optional == NULL);
        var_consume_optional = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_instance_3;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 245;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(par_self);
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 245;
        tmp_assign_source_36 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[47]);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_positionals) == NULL);
        PyCell_SET(var_positionals, tmp_assign_source_36);

    }
    {
        PyObject *tmp_assign_source_37;
        struct Nuitka_CellObject *tmp_closure_3[5];

        tmp_closure_3[0] = par_arg_strings;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_arg_strings_pattern;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = var_positionals;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = par_self;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = var_take_action;
        Py_INCREF(tmp_closure_3[4]);

        tmp_assign_source_37 = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__3_consume_positionals(tmp_closure_3);

        assert(var_consume_positionals == NULL);
        var_consume_positionals = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(var_extras) == NULL);
        PyCell_SET(var_extras, tmp_assign_source_38);

    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[2];
        assert(var_start_index == NULL);
        Py_INCREF(tmp_assign_source_39);
        var_start_index = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(var_option_string_indices) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(var_option_string_indices));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[50]);
        assert(tmp_called_value_10 != NULL);
        if (Nuitka_Cell_GET(var_option_string_indices) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 274;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = Nuitka_Cell_GET(var_option_string_indices);
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 274;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_option_string_index == NULL);
        var_max_option_string_index = tmp_assign_source_40;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[51];
        assert(var_max_option_string_index == NULL);
        Py_INCREF(tmp_assign_source_41);
        var_max_option_string_index = tmp_assign_source_41;
    }
    branch_end_4:;
    loop_start_5:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = var_start_index;
        CHECK_OBJECT(var_max_option_string_index);
        tmp_cmp_expr_right_4 = var_max_option_string_index;
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto loop_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts[53]);
        assert(tmp_called_value_11 != NULL);
        // Tried code:
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_8;
            if (Nuitka_Cell_GET(var_option_string_indices) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                goto try_except_handler_10;
            }

            tmp_iter_arg_8 = Nuitka_Cell_GET(var_option_string_indices);
            tmp_assign_source_43 = MAKE_ITERATOR(tmp_iter_arg_8);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_43;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_44;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_67dfafb828d7a6f141a174df648c0667_2)) {
            Py_XDECREF(cache_frame_67dfafb828d7a6f141a174df648c0667_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_67dfafb828d7a6f141a174df648c0667_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_67dfafb828d7a6f141a174df648c0667_2 = MAKE_FUNCTION_FRAME(codeobj_67dfafb828d7a6f141a174df648c0667, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_67dfafb828d7a6f141a174df648c0667_2->m_type_description == NULL);
        frame_67dfafb828d7a6f141a174df648c0667_2 = cache_frame_67dfafb828d7a6f141a174df648c0667_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_67dfafb828d7a6f141a174df648c0667_2);
        assert(Py_REFCNT(frame_67dfafb828d7a6f141a174df648c0667_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_45;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_5 = tmp_listcomp_1__$0;
            tmp_assign_source_45 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_45 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 279;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_45;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_46;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_46 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_index;
                outline_0_var_index = tmp_assign_source_46;
                Py_INCREF(outline_0_var_index);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(outline_0_var_index);
            tmp_cmp_expr_left_5 = outline_0_var_index;
            if (var_start_index == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[52]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 279;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }

            tmp_cmp_expr_right_5 = var_start_index;
            tmp_condition_result_6 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_index);
            tmp_append_value_1 = outline_0_var_index;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "oo";
                goto try_except_handler_11;
            }
        }
        branch_no_6:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "oo";
            goto try_except_handler_11;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_11 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_11);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_10;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_67dfafb828d7a6f141a174df648c0667_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_67dfafb828d7a6f141a174df648c0667_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_67dfafb828d7a6f141a174df648c0667_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_67dfafb828d7a6f141a174df648c0667_2,
            type_description_2,
            outline_0_var_index,
            var_start_index
        );


        // Release cached frame if used for exception.
        if (frame_67dfafb828d7a6f141a174df648c0667_2 == cache_frame_67dfafb828d7a6f141a174df648c0667_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_67dfafb828d7a6f141a174df648c0667_2);
            cache_frame_67dfafb828d7a6f141a174df648c0667_2 = NULL;
        }

        assertFrameObject(frame_67dfafb828d7a6f141a174df648c0667_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_10;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(outline_0_var_index);
        outline_0_var_index = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_index);
        outline_0_var_index = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 279;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 279;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_next_option_string_index;
            var_next_option_string_index = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_6 = var_start_index;
        CHECK_OBJECT(var_next_option_string_index);
        tmp_cmp_expr_right_6 = var_next_option_string_index;
        tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        if (var_consume_positionals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_12 = var_consume_positionals;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = var_start_index;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 281;
        tmp_assign_source_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_positionals_end_index;
            var_positionals_end_index = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_positionals_end_index);
        tmp_cmp_expr_left_7 = var_positionals_end_index;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = var_start_index;
        tmp_condition_result_8 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_48;
        CHECK_OBJECT(var_positionals_end_index);
        tmp_assign_source_48 = var_positionals_end_index;
        {
            PyObject *old = var_start_index;
            var_start_index = tmp_assign_source_48;
            Py_INCREF(var_start_index);
            Py_XDECREF(old);
        }

    }
    goto loop_start_5;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(var_positionals_end_index);
        tmp_assign_source_49 = var_positionals_end_index;
        {
            PyObject *old = var_start_index;
            var_start_index = tmp_assign_source_49;
            Py_INCREF(var_start_index);
            Py_XDECREF(old);
        }

    }
    branch_end_8:;
    branch_no_7:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_8 = var_start_index;
        if (Nuitka_Cell_GET(var_option_string_indices) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = Nuitka_Cell_GET(var_option_string_indices);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_3;
        if (Nuitka_Cell_GET(par_arg_strings) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(par_arg_strings);
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_value_2 = var_start_index;
        CHECK_OBJECT(var_next_option_string_index);
        tmp_stop_value_3 = var_next_option_string_index;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_3);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_assign_source_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_strings;
            var_strings = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_13;
        if (Nuitka_Cell_GET(var_extras) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(var_extras);
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[27]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_strings);
        tmp_args_element_value_13 = var_strings;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 295;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(var_next_option_string_index);
        tmp_assign_source_51 = var_next_option_string_index;
        {
            PyObject *old = var_start_index;
            var_start_index = tmp_assign_source_51;
            Py_INCREF(var_start_index);
            Py_XDECREF(old);
        }

    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_14;
        if (var_consume_optional == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 299;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_14 = var_consume_optional;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 299;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = var_start_index;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 299;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_start_index;
            var_start_index = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 277;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_5;
    loop_end_5:;
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_15;
        if (var_consume_positionals == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_15 = var_consume_positionals;
        if (var_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_15 = var_start_index;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 302;
        tmp_assign_source_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stop_index == NULL);
        var_stop_index = tmp_assign_source_53;
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_4;
        if (Nuitka_Cell_GET(var_extras) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = Nuitka_Cell_GET(var_extras);
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[27]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_arg_strings) == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 305;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(par_arg_strings);
        CHECK_OBJECT(var_stop_index);
        tmp_start_value_3 = var_stop_index;
        tmp_stop_value_4 = Py_None;
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_4);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_args_element_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 305;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 305;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_positionals));
        tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(var_positionals));
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_5;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[18]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[31]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_positionals));
        tmp_expression_value_20 = Nuitka_Cell_GET(var_positionals);
        tmp_subscript_value_5 = mod_consts[2];
        tmp_args_element_value_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_5, 0);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 311;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 311;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_19;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = Nuitka_Cell_GET(par_self);
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[55]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 312;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 312;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[57]);

        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 312;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 312;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_expression_value_22;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 315;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = Nuitka_Cell_GET(par_self);
        tmp_iter_arg_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[58]);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_54;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_6 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_55 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_55 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                exception_lineno = 315;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_56 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_56;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_action);
        tmp_expression_value_23 = var_action;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[59]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 316;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_action);
        tmp_cmp_expr_left_9 = var_action;
        if (Nuitka_Cell_GET(var_seen_actions) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }

        tmp_cmp_expr_right_9 = Nuitka_Cell_GET(var_seen_actions);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_action);
        tmp_args_element_value_19 = var_action;
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 318;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_57;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_called_value_22;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 319;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(par_self);
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[55]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 319;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 319;
        tmp_mod_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[62]);

        if (tmp_mod_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 319;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_name);
        tmp_mod_expr_right_1 = var_name;
        tmp_args_element_value_20 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_left_1);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 319;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 319;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_12:;
    branch_no_11:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 315;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_expression_value_25;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = Nuitka_Cell_GET(par_self);
        tmp_iter_arg_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[22]);
        if (tmp_iter_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = MAKE_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_58;
    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_7 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_59 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                exception_lineno = 322;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_60 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_group;
            var_group = tmp_assign_source_60;
            Py_INCREF(var_group);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_group);
        tmp_expression_value_26 = var_group;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[59]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 323;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_assign_source_61;
        tmp_assign_source_61 = NUITKA_BOOL_FALSE;
        tmp_for_loop_7__break_indicator = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_group);
        tmp_expression_value_27 = var_group;
        tmp_iter_arg_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[23]);
        if (tmp_iter_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_62 = MAKE_ITERATOR(tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_value_value_1 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_63 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_assign_source_63 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            exception_lineno = 324;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = exception_keeper_type_12;
        tmp_cmp_expr_right_10 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        nuitka_bool tmp_assign_source_64;
        tmp_assign_source_64 = NUITKA_BOOL_TRUE;
        tmp_for_loop_7__break_indicator = tmp_assign_source_64;
    }
    Py_DECREF(exception_keeper_type_12);
    Py_XDECREF(exception_keeper_value_12);
    Py_XDECREF(exception_keeper_tb_12);
    goto loop_end_9;
    goto branch_end_14;
    branch_no_14:;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    branch_end_14:;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_65 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_65;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_action);
        tmp_cmp_expr_left_11 = var_action;
        if (Nuitka_Cell_GET(var_seen_non_default_actions) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_14;
        }

        tmp_cmp_expr_right_11 = Nuitka_Cell_GET(var_seen_non_default_actions);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_15 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    goto loop_end_9;
    branch_no_15:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 324;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(tmp_for_loop_7__break_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = tmp_for_loop_7__break_indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_66;
        // Tried code:
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_iter_arg_12;
            PyObject *tmp_expression_value_28;
            CHECK_OBJECT(var_group);
            tmp_expression_value_28 = var_group;
            tmp_iter_arg_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[23]);
            if (tmp_iter_arg_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                goto try_except_handler_16;
            }
            tmp_assign_source_67 = MAKE_ITERATOR(tmp_iter_arg_12);
            Py_DECREF(tmp_iter_arg_12);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "ccccccooooocoooooccococooooooooooo";
                goto try_except_handler_16;
            }
            {
                PyObject *old = tmp_listcomp_2__$0;
                tmp_listcomp_2__$0 = tmp_assign_source_67;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_68;
            tmp_assign_source_68 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_2__contraction;
                tmp_listcomp_2__contraction = tmp_assign_source_68;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3)) {
            Py_XDECREF(cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3 = MAKE_FUNCTION_FRAME(codeobj_5f12fb46b610338c6e51c7bf8085a18c, module_argcomplete$packages$_argparse, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3->m_type_description == NULL);
        frame_5f12fb46b610338c6e51c7bf8085a18c_3 = cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5f12fb46b610338c6e51c7bf8085a18c_3);
        assert(Py_REFCNT(frame_5f12fb46b610338c6e51c7bf8085a18c_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_10:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_69;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_8 = tmp_listcomp_2__$0;
            tmp_assign_source_69 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_69 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_10;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 331;
                    goto try_except_handler_17;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_69;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_70;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_70 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_action;
                outline_1_var_action = tmp_assign_source_70;
                Py_INCREF(outline_1_var_action);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_13;
            PyObject *tmp_cmp_expr_right_13;
            PyObject *tmp_expression_value_29;
            CHECK_OBJECT(outline_1_var_action);
            tmp_expression_value_29 = outline_1_var_action;
            tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[64]);
            if (tmp_cmp_expr_left_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_cmp_expr_right_13 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_cmp_expr_right_13 == NULL)) {
                tmp_cmp_expr_right_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_cmp_expr_right_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_cmp_expr_left_13);

                exception_lineno = 331;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_condition_result_17 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
            Py_DECREF(tmp_cmp_expr_left_13);
            if (tmp_condition_result_17 != false) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_21;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            CHECK_OBJECT(outline_1_var_action);
            tmp_args_element_value_21 = outline_1_var_action;
            frame_5f12fb46b610338c6e51c7bf8085a18c_3->m_frame.f_lineno = 331;
            tmp_unicode_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_21);
            if (tmp_unicode_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_append_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            Py_DECREF(tmp_unicode_arg_1);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "o";
                goto try_except_handler_17;
            }
        }
        branch_no_17:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_2 = "o";
            goto try_except_handler_17;
        }
        goto loop_start_10;
        loop_end_10:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_66 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_16;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5f12fb46b610338c6e51c7bf8085a18c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5f12fb46b610338c6e51c7bf8085a18c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5f12fb46b610338c6e51c7bf8085a18c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5f12fb46b610338c6e51c7bf8085a18c_3,
            type_description_2,
            outline_1_var_action
        );


        // Release cached frame if used for exception.
        if (frame_5f12fb46b610338c6e51c7bf8085a18c_3 == cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3);
            cache_frame_5f12fb46b610338c6e51c7bf8085a18c_3 = NULL;
        }

        assertFrameObject(frame_5f12fb46b610338c6e51c7bf8085a18c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_16;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_XDECREF(outline_1_var_action);
        outline_1_var_action = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_action);
        outline_1_var_action = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 331;
        goto try_except_handler_13;
        outline_result_2:;
        {
            PyObject *old = var_names;
            var_names = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 333;
        tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[66]);

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = var_msg;
            var_msg = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 334;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }

        tmp_expression_value_30 = Nuitka_Cell_GET(par_self);
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[55]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        CHECK_OBJECT(var_msg);
        tmp_mod_expr_left_2 = var_msg;
        tmp_str_arg_value_2 = mod_consts[67];
        CHECK_OBJECT(var_names);
        tmp_iterable_value_2 = var_names;
        tmp_mod_expr_right_2 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 334;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        tmp_args_element_value_22 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 334;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        frame_ad4511cfa9413a466843119d0a9bce92->m_frame.f_lineno = 334;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto try_except_handler_13;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_no_16:;
    branch_no_13:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 322;
        type_description_1 = "ccccccooooocoooooccococooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_namespace));
        tmp_tuple_element_1 = Nuitka_Cell_GET(par_namespace);
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (Nuitka_Cell_GET(var_extras) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 337;
            type_description_1 = "ccccccooooocoooooccococooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(var_extras);
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad4511cfa9413a466843119d0a9bce92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad4511cfa9413a466843119d0a9bce92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad4511cfa9413a466843119d0a9bce92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad4511cfa9413a466843119d0a9bce92,
        type_description_1,
        par_self,
        par_arg_strings,
        par_namespace,
        var_action_conflicts,
        var_seen_actions,
        var_seen_non_default_actions,
        var_mutex_group,
        var_group_actions,
        var_i,
        var_mutex_action,
        var_conflicts,
        var_option_string_indices,
        var_arg_string_pattern_parts,
        var_arg_strings_iter,
        var_arg_string,
        var_option_tuple,
        var_pattern,
        var_arg_strings_pattern,
        var_take_action,
        var_consume_optional,
        var_positionals,
        var_consume_positionals,
        var_extras,
        var_start_index,
        var_max_option_string_index,
        var_next_option_string_index,
        var_positionals_end_index,
        var_strings,
        var_stop_index,
        var_action,
        var_name,
        var_group,
        var_names,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_ad4511cfa9413a466843119d0a9bce92 == cache_frame_ad4511cfa9413a466843119d0a9bce92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad4511cfa9413a466843119d0a9bce92);
        cache_frame_ad4511cfa9413a466843119d0a9bce92 = NULL;
    }

    assertFrameObject(frame_ad4511cfa9413a466843119d0a9bce92);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_arg_strings);
    Py_DECREF(par_arg_strings);
    par_arg_strings = NULL;
    CHECK_OBJECT(var_action_conflicts);
    Py_DECREF(var_action_conflicts);
    var_action_conflicts = NULL;
    CHECK_OBJECT(var_seen_actions);
    Py_DECREF(var_seen_actions);
    var_seen_actions = NULL;
    CHECK_OBJECT(var_seen_non_default_actions);
    Py_DECREF(var_seen_non_default_actions);
    var_seen_non_default_actions = NULL;
    Py_XDECREF(var_mutex_group);
    var_mutex_group = NULL;
    Py_XDECREF(var_group_actions);
    var_group_actions = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_mutex_action);
    var_mutex_action = NULL;
    Py_XDECREF(var_conflicts);
    var_conflicts = NULL;
    CHECK_OBJECT(var_option_string_indices);
    Py_DECREF(var_option_string_indices);
    var_option_string_indices = NULL;
    Py_XDECREF(var_arg_string_pattern_parts);
    var_arg_string_pattern_parts = NULL;
    Py_XDECREF(var_arg_strings_iter);
    var_arg_strings_iter = NULL;
    Py_XDECREF(var_arg_string);
    var_arg_string = NULL;
    Py_XDECREF(var_option_tuple);
    var_option_tuple = NULL;
    Py_XDECREF(var_pattern);
    var_pattern = NULL;
    CHECK_OBJECT(var_arg_strings_pattern);
    Py_DECREF(var_arg_strings_pattern);
    var_arg_strings_pattern = NULL;
    CHECK_OBJECT(var_take_action);
    Py_DECREF(var_take_action);
    var_take_action = NULL;
    Py_XDECREF(var_consume_optional);
    var_consume_optional = NULL;
    CHECK_OBJECT(var_positionals);
    Py_DECREF(var_positionals);
    var_positionals = NULL;
    Py_XDECREF(var_consume_positionals);
    var_consume_positionals = NULL;
    CHECK_OBJECT(var_extras);
    Py_DECREF(var_extras);
    var_extras = NULL;
    Py_XDECREF(var_start_index);
    var_start_index = NULL;
    CHECK_OBJECT(var_max_option_string_index);
    Py_DECREF(var_max_option_string_index);
    var_max_option_string_index = NULL;
    Py_XDECREF(var_next_option_string_index);
    var_next_option_string_index = NULL;
    Py_XDECREF(var_positionals_end_index);
    var_positionals_end_index = NULL;
    Py_XDECREF(var_strings);
    var_strings = NULL;
    CHECK_OBJECT(var_stop_index);
    Py_DECREF(var_stop_index);
    var_stop_index = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_group);
    var_group = NULL;
    Py_XDECREF(var_names);
    var_names = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_arg_strings);
    Py_DECREF(par_arg_strings);
    par_arg_strings = NULL;
    CHECK_OBJECT(var_action_conflicts);
    Py_DECREF(var_action_conflicts);
    var_action_conflicts = NULL;
    CHECK_OBJECT(var_seen_actions);
    Py_DECREF(var_seen_actions);
    var_seen_actions = NULL;
    CHECK_OBJECT(var_seen_non_default_actions);
    Py_DECREF(var_seen_non_default_actions);
    var_seen_non_default_actions = NULL;
    Py_XDECREF(var_mutex_group);
    var_mutex_group = NULL;
    Py_XDECREF(var_group_actions);
    var_group_actions = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_mutex_action);
    var_mutex_action = NULL;
    Py_XDECREF(var_conflicts);
    var_conflicts = NULL;
    CHECK_OBJECT(var_option_string_indices);
    Py_DECREF(var_option_string_indices);
    var_option_string_indices = NULL;
    Py_XDECREF(var_arg_string_pattern_parts);
    var_arg_string_pattern_parts = NULL;
    Py_XDECREF(var_arg_strings_iter);
    var_arg_strings_iter = NULL;
    Py_XDECREF(var_arg_string);
    var_arg_string = NULL;
    Py_XDECREF(var_option_tuple);
    var_option_tuple = NULL;
    Py_XDECREF(var_pattern);
    var_pattern = NULL;
    CHECK_OBJECT(var_arg_strings_pattern);
    Py_DECREF(var_arg_strings_pattern);
    var_arg_strings_pattern = NULL;
    CHECK_OBJECT(var_take_action);
    Py_DECREF(var_take_action);
    var_take_action = NULL;
    Py_XDECREF(var_consume_optional);
    var_consume_optional = NULL;
    CHECK_OBJECT(var_positionals);
    Py_DECREF(var_positionals);
    var_positionals = NULL;
    Py_XDECREF(var_consume_positionals);
    var_consume_positionals = NULL;
    CHECK_OBJECT(var_extras);
    Py_DECREF(var_extras);
    var_extras = NULL;
    Py_XDECREF(var_start_index);
    var_start_index = NULL;
    Py_XDECREF(var_max_option_string_index);
    var_max_option_string_index = NULL;
    Py_XDECREF(var_next_option_string_index);
    var_next_option_string_index = NULL;
    Py_XDECREF(var_positionals_end_index);
    var_positionals_end_index = NULL;
    Py_XDECREF(var_strings);
    var_strings = NULL;
    Py_XDECREF(var_stop_index);
    var_stop_index = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_group);
    var_group = NULL;
    Py_XDECREF(var_names);
    var_names = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_namespace);
    Py_DECREF(par_namespace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_namespace);
    Py_DECREF(par_namespace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__1_take_action(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_action = python_pars[0];
    PyObject *par_argument_strings = python_pars[1];
    PyObject *par_option_string = python_pars[2];
    PyObject *var_argument_values = NULL;
    PyObject *var_conflict_action = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_action_name = NULL;
    PyObject *var_subnamespace = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3b841b726105f2bf74e0af17e7e0c711;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_3b841b726105f2bf74e0af17e7e0c711 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3b841b726105f2bf74e0af17e7e0c711)) {
        Py_XDECREF(cache_frame_3b841b726105f2bf74e0af17e7e0c711);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b841b726105f2bf74e0af17e7e0c711 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b841b726105f2bf74e0af17e7e0c711 = MAKE_FUNCTION_FRAME(codeobj_3b841b726105f2bf74e0af17e7e0c711, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b841b726105f2bf74e0af17e7e0c711->m_type_description == NULL);
    frame_3b841b726105f2bf74e0af17e7e0c711 = cache_frame_3b841b726105f2bf74e0af17e7e0c711;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b841b726105f2bf74e0af17e7e0c711);
    assert(Py_REFCNT(frame_3b841b726105f2bf74e0af17e7e0c711) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_action);
        tmp_args_element_value_1 = par_action;
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 130;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[68], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[4]);
        CHECK_OBJECT(par_action);
        tmp_args_element_value_2 = par_action;
        CHECK_OBJECT(par_argument_strings);
        tmp_args_element_value_3 = par_argument_strings;
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[69],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_argument_values == NULL);
        var_argument_values = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_argument_values);
        tmp_cmp_expr_left_1 = var_argument_values;
        CHECK_OBJECT(par_action);
        tmp_expression_value_1 = par_action;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 137;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(par_action);
        tmp_args_element_value_4 = par_action;
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 137;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[68], tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_action);
        tmp_args_element_value_5 = par_action;
        tmp_args_element_value_6 = MAKE_LIST_EMPTY(0);
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooccccc";
                exception_lineno = 138;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_conflict_action;
            var_conflict_action = tmp_assign_source_4;
            Py_INCREF(var_conflict_action);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_conflict_action);
        tmp_cmp_expr_left_2 = var_conflict_action;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 140;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[71]);

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_conflict_action);
        tmp_args_element_value_7 = var_conflict_action;
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 141;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_7);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        assert(var_action_name == NULL);
        var_action_name = tmp_assign_source_6;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_action);
        tmp_args_element_value_8 = par_action;
        CHECK_OBJECT(var_msg);
        tmp_mod_expr_left_1 = var_msg;
        CHECK_OBJECT(var_action_name);
        tmp_mod_expr_right_1 = var_action_name;
        tmp_args_element_value_9 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 142;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooccccc";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 138;
        type_description_1 = "ooooooooooccccc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_argument_values);
        tmp_cmp_expr_left_3 = var_argument_values;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_1 = par_action;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(par_action);
        tmp_called_value_5 = par_action;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_value_10 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_value_11 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_argument_values);
        tmp_args_element_value_12 = var_argument_values;
        CHECK_OBJECT(par_option_string);
        tmp_args_element_value_13 = par_option_string;
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_3b841b726105f2bf74e0af17e7e0c711, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_3b841b726105f2bf74e0af17e7e0c711, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_action);
        tmp_isinstance_inst_2 = par_action;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_action);
        tmp_expression_value_5 = par_action;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[75]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_argument_values);
        tmp_expression_value_6 = var_argument_values;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 155;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        assert(var_subnamespace == NULL);
        var_subnamespace = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_vars_arg_1;
        CHECK_OBJECT(var_subnamespace);
        tmp_vars_arg_1 = var_subnamespace;
        tmp_expression_value_7 = LOOKUP_VARS(tmp_vars_arg_1);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[76]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = 156;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooccccc";
                exception_lineno = 156;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_2__iter_value;
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooccccc";
            exception_lineno = 156;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooccccc";
            exception_lineno = 156;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooccccc";
                    exception_lineno = 156;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooccccc";
            exception_lineno = 156;
            goto try_except_handler_7;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_6;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_13;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_14;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_5;
        }

        tmp_setattr_target_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_key);
        tmp_setattr_attr_1 = var_key;
        CHECK_OBJECT(var_value);
        tmp_setattr_value_1 = var_value;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooccccc";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 156;
        type_description_1 = "ooooooooooccccc";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 159;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3b841b726105f2bf74e0af17e7e0c711->m_frame) frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooccccc";
    goto try_except_handler_4;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 147;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3b841b726105f2bf74e0af17e7e0c711->m_frame) frame_3b841b726105f2bf74e0af17e7e0c711->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooccccc";
    goto try_except_handler_4;
    branch_end_4:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3b841b726105f2bf74e0af17e7e0c711, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b841b726105f2bf74e0af17e7e0c711->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b841b726105f2bf74e0af17e7e0c711, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b841b726105f2bf74e0af17e7e0c711,
        type_description_1,
        par_action,
        par_argument_strings,
        par_option_string,
        var_argument_values,
        var_conflict_action,
        var_msg,
        var_action_name,
        var_subnamespace,
        var_key,
        var_value,
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[3],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_3b841b726105f2bf74e0af17e7e0c711 == cache_frame_3b841b726105f2bf74e0af17e7e0c711) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b841b726105f2bf74e0af17e7e0c711);
        cache_frame_3b841b726105f2bf74e0af17e7e0c711 = NULL;
    }

    assertFrameObject(frame_3b841b726105f2bf74e0af17e7e0c711);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_argument_values);
    var_argument_values = NULL;
    Py_XDECREF(var_conflict_action);
    var_conflict_action = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_argument_values);
    var_argument_values = NULL;
    Py_XDECREF(var_conflict_action);
    var_conflict_action = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_action_name);
    var_action_name = NULL;
    Py_XDECREF(var_subnamespace);
    var_subnamespace = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_argument_strings);
    Py_DECREF(par_argument_strings);
    CHECK_OBJECT(par_option_string);
    Py_DECREF(par_option_string);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_action);
    Py_DECREF(par_action);
    CHECK_OBJECT(par_argument_strings);
    Py_DECREF(par_argument_strings);
    CHECK_OBJECT(par_option_string);
    Py_DECREF(par_option_string);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__2_consume_optional(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start_index = python_pars[0];
    PyObject *var_action_tuples = NULL;
    PyObject *var_option_tuple = NULL;
    PyObject *var_action = NULL;
    PyObject *var_option_string = NULL;
    PyObject *var_explicit_arg = NULL;
    PyObject *var_match_argument = NULL;
    PyObject *var_arg_count = NULL;
    PyObject *var_chars = NULL;
    PyObject *var_char = NULL;
    PyObject *var_new_explicit_arg = NULL;
    PyObject *var_optionals_map = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_args = NULL;
    PyObject *var_start = NULL;
    PyObject *var_selected_patterns = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_fcb2f16696fa15bf2331a114e20d463c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_fcb2f16696fa15bf2331a114e20d463c = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fcb2f16696fa15bf2331a114e20d463c)) {
        Py_XDECREF(cache_frame_fcb2f16696fa15bf2331a114e20d463c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcb2f16696fa15bf2331a114e20d463c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcb2f16696fa15bf2331a114e20d463c = MAKE_FUNCTION_FRAME(codeobj_fcb2f16696fa15bf2331a114e20d463c, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcb2f16696fa15bf2331a114e20d463c->m_type_description == NULL);
    frame_fcb2f16696fa15bf2331a114e20d463c = cache_frame_fcb2f16696fa15bf2331a114e20d463c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fcb2f16696fa15bf2331a114e20d463c);
    assert(Py_REFCNT(frame_fcb2f16696fa15bf2331a114e20d463c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(par_start_index);
        tmp_subscript_value_1 = par_start_index;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_option_tuple == NULL);
        var_option_tuple = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_option_tuple);
        tmp_iter_arg_1 = var_option_tuple;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooooooocccccc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 165;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 165;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 165;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooocccccc";
                    exception_lineno = 165;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[77];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 165;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_action == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_action = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_option_string == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_option_string = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_explicit_arg == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_explicit_arg = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_match_argument == NULL);
        var_match_argument = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
        assert(var_action_tuples == NULL);
        var_action_tuples = tmp_assign_source_10;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_action;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_start_index);
        tmp_subscript_value_2 = par_start_index;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 174;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_start_index);
        tmp_add_expr_left_1 = par_start_index;
        tmp_add_expr_right_1 = mod_consts[8];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_explicit_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_explicit_arg;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (var_match_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = var_match_argument;
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = var_action;
        tmp_args_element_value_3 = mod_consts[37];
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arg_count;
            var_arg_count = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_assign_source_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[82]);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_chars;
            var_chars = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_arg_count);
        tmp_cmp_expr_left_3 = var_arg_count;
        tmp_cmp_expr_right_3 = mod_consts[2];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_option_string == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_option_string;
        tmp_subscript_value_3 = mod_consts[8];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_3, 1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_chars);
        tmp_cmp_expr_right_4 = var_chars;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        if (var_action_tuples == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_action_tuples;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_action;
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = MAKE_LIST_EMPTY(0);
        PyTuple_SET_ITEM(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        if (var_option_string == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooocccccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_option_string;
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 187;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_4;
        if (var_option_string == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_option_string;
        tmp_subscript_value_4 = mod_consts[2];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_char;
            var_char = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_char);
        tmp_add_expr_left_2 = var_char;
        if (var_explicit_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_explicit_arg;
        tmp_subscript_value_5 = mod_consts[2];
        tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_5, 0);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_option_string;
            var_option_string = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_6;
        if (var_explicit_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = var_explicit_arg;
        tmp_subscript_value_6 = mod_consts[85];
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = Py_None;
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_15 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_15 = tmp_or_left_value_1;
        or_end_1:;
        {
            PyObject *old = var_new_explicit_arg;
            var_new_explicit_arg = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_11;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[86]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_optionals_map;
            var_optionals_map = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_option_string);
        tmp_cmp_expr_left_5 = var_option_string;
        CHECK_OBJECT(var_optionals_map);
        tmp_cmp_expr_right_5 = var_optionals_map;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_optionals_map);
        tmp_expression_value_12 = var_optionals_map;
        CHECK_OBJECT(var_option_string);
        tmp_subscript_value_7 = var_option_string;
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(var_new_explicit_arg);
        tmp_assign_source_18 = var_new_explicit_arg;
        {
            PyObject *old = var_explicit_arg;
            var_explicit_arg = tmp_assign_source_18;
            Py_INCREF(var_explicit_arg);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 196;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[87]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_19;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_action;
        CHECK_OBJECT(var_msg);
        tmp_mod_expr_left_1 = var_msg;
        if (var_explicit_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = var_explicit_arg;
        tmp_args_element_value_6 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 197;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooocccccc";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_arg_count);
        tmp_cmp_expr_left_6 = var_arg_count;
        tmp_cmp_expr_right_6 = mod_consts[8];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(par_start_index);
        tmp_add_expr_left_3 = par_start_index;
        tmp_add_expr_right_3 = mod_consts[8];
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_stop == NULL);
        var_stop = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_list_element_1;
        if (var_explicit_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_list_element_1 = var_explicit_arg;
        tmp_assign_source_21 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assign_source_21, 0, tmp_list_element_1);
        assert(var_args == NULL);
        var_args = tmp_assign_source_21;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_2;
        if (var_action_tuples == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_action_tuples;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[31]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_action;
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_args);
        tmp_tuple_element_2 = var_args;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_2);
        if (var_option_string == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooocccccc";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_option_string;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 204;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto loop_end_1;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 210;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[87]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_22;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = var_action;
        CHECK_OBJECT(var_msg);
        tmp_mod_expr_left_2 = var_msg;
        if (var_explicit_arg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_2 = var_explicit_arg;
        tmp_args_element_value_9 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 211;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooocccccc";
        goto frame_exception_exit_1;
    }
    branch_end_5:;
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(par_start_index);
        tmp_add_expr_left_4 = par_start_index;
        tmp_add_expr_right_4 = mod_consts[8];
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_start == NULL);
        var_start = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_start);
        tmp_start_value_1 = var_start;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_8 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_8 == NULL));
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_selected_patterns == NULL);
        var_selected_patterns = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_assattr_target_1;
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_list_element_2 = var_action;
        tmp_assattr_value_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_assattr_value_1, 0, tmp_list_element_2);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[2];
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = var_action;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        if (var_match_argument == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_9 = var_match_argument;
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = var_action;
        CHECK_OBJECT(var_selected_patterns);
        tmp_args_element_value_11 = var_selected_patterns;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_arg_count;
            var_arg_count = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(var_start);
        tmp_add_expr_left_5 = var_start;
        CHECK_OBJECT(var_arg_count);
        tmp_add_expr_right_5 = var_arg_count;
        tmp_assign_source_26 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_stop == NULL);
        var_stop = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_start);
        tmp_start_value_2 = var_start;
        CHECK_OBJECT(var_stop);
        tmp_stop_value_2 = var_stop;
        tmp_subscript_value_9 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        assert(!(tmp_subscript_value_9 == NULL));
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(var_args == NULL);
        var_args = tmp_assign_source_27;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_args);
        tmp_len_arg_1 = var_args;
        tmp_ass_subvalue_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = var_action;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = var_action;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 229;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_13;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[18]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[90]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_13 = var_action;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 230;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_tuple_element_3;
        if (var_action_tuples == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = var_action_tuples;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[31]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        if (var_action == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = var_action;
        tmp_args_element_value_14 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_14, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_args);
        tmp_tuple_element_3 = var_args;
        PyTuple_SET_ITEM0(tmp_args_element_value_14, 1, tmp_tuple_element_3);
        if (var_option_string == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooocccccc";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_3 = var_option_string;
        PyTuple_SET_ITEM0(tmp_args_element_value_14, 2, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 233;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto loop_end_1;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 171;
        type_description_1 = "ooooooooooooooooocccccc";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        if (var_action_tuples == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = var_action_tuples;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 238;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooocccccc";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_2;
        if (var_action_tuples == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_2 = var_action_tuples;
        tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooocccccc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_28;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooocccccc";
                exception_lineno = 239;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooocccccc";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_4, 0, 3);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 239;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tmp_unpack_5, 1, 3);
        if (tmp_assign_source_32 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 239;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tmp_unpack_6, 2, 3);
        if (tmp_assign_source_33 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 239;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooocccccc";
                    exception_lineno = 239;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[77];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooocccccc";
            exception_lineno = 239;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_34;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_34 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_34;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_35 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_35;
            Py_INCREF(var_args);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_36 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_option_string;
            var_option_string = tmp_assign_source_36;
            Py_INCREF(var_option_string);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooocccccc";
            goto try_except_handler_4;
        }

        tmp_called_value_13 = Nuitka_Cell_GET(self->m_closure[5]);
        CHECK_OBJECT(var_action);
        tmp_args_element_value_15 = var_action;
        CHECK_OBJECT(var_args);
        tmp_args_element_value_16 = var_args;
        CHECK_OBJECT(var_option_string);
        tmp_args_element_value_17 = var_option_string;
        frame_fcb2f16696fa15bf2331a114e20d463c->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooocccccc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 239;
        type_description_1 = "ooooooooooooooooocccccc";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fcb2f16696fa15bf2331a114e20d463c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcb2f16696fa15bf2331a114e20d463c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcb2f16696fa15bf2331a114e20d463c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcb2f16696fa15bf2331a114e20d463c,
        type_description_1,
        par_start_index,
        var_action_tuples,
        var_option_tuple,
        var_action,
        var_option_string,
        var_explicit_arg,
        var_match_argument,
        var_arg_count,
        var_chars,
        var_char,
        var_new_explicit_arg,
        var_optionals_map,
        var_msg,
        var_stop,
        var_args,
        var_start,
        var_selected_patterns,
        self->m_closure[3],
        self->m_closure[4],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[5]
    );


    // Release cached frame if used for exception.
    if (frame_fcb2f16696fa15bf2331a114e20d463c == cache_frame_fcb2f16696fa15bf2331a114e20d463c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcb2f16696fa15bf2331a114e20d463c);
        cache_frame_fcb2f16696fa15bf2331a114e20d463c = NULL;
    }

    assertFrameObject(frame_fcb2f16696fa15bf2331a114e20d463c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(var_stop);
    tmp_return_value = var_stop;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_action_tuples);
    var_action_tuples = NULL;
    CHECK_OBJECT(var_option_tuple);
    Py_DECREF(var_option_tuple);
    var_option_tuple = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_option_string);
    var_option_string = NULL;
    Py_XDECREF(var_explicit_arg);
    var_explicit_arg = NULL;
    Py_XDECREF(var_match_argument);
    var_match_argument = NULL;
    Py_XDECREF(var_arg_count);
    var_arg_count = NULL;
    Py_XDECREF(var_chars);
    var_chars = NULL;
    Py_XDECREF(var_char);
    var_char = NULL;
    Py_XDECREF(var_new_explicit_arg);
    var_new_explicit_arg = NULL;
    Py_XDECREF(var_optionals_map);
    var_optionals_map = NULL;
    Py_XDECREF(var_stop);
    var_stop = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_selected_patterns);
    var_selected_patterns = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_action_tuples);
    var_action_tuples = NULL;
    Py_XDECREF(var_option_tuple);
    var_option_tuple = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_option_string);
    var_option_string = NULL;
    Py_XDECREF(var_explicit_arg);
    var_explicit_arg = NULL;
    Py_XDECREF(var_match_argument);
    var_match_argument = NULL;
    Py_XDECREF(var_arg_count);
    var_arg_count = NULL;
    Py_XDECREF(var_chars);
    var_chars = NULL;
    Py_XDECREF(var_char);
    var_char = NULL;
    Py_XDECREF(var_new_explicit_arg);
    var_new_explicit_arg = NULL;
    Py_XDECREF(var_optionals_map);
    var_optionals_map = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_stop);
    var_stop = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_start);
    var_start = NULL;
    Py_XDECREF(var_selected_patterns);
    var_selected_patterns = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_start_index);
    Py_DECREF(par_start_index);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_start_index);
    Py_DECREF(par_start_index);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__3_consume_positionals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start_index = python_pars[0];
    PyObject *var_match_partial = NULL;
    PyObject *var_selected_pattern = NULL;
    PyObject *var_arg_counts = NULL;
    PyObject *var_action = NULL;
    PyObject *var_arg_count = NULL;
    PyObject *var_args = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1e82958c679c817a02be10382dff50c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1e82958c679c817a02be10382dff50c7 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e82958c679c817a02be10382dff50c7)) {
        Py_XDECREF(cache_frame_1e82958c679c817a02be10382dff50c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e82958c679c817a02be10382dff50c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e82958c679c817a02be10382dff50c7 = MAKE_FUNCTION_FRAME(codeobj_1e82958c679c817a02be10382dff50c7, module_argcomplete$packages$_argparse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e82958c679c817a02be10382dff50c7->m_type_description == NULL);
    frame_1e82958c679c817a02be10382dff50c7 = cache_frame_1e82958c679c817a02be10382dff50c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e82958c679c817a02be10382dff50c7);
    assert(Py_REFCNT(frame_1e82958c679c817a02be10382dff50c7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[91]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_match_partial == NULL);
        var_match_partial = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_start_index);
        tmp_start_value_1 = par_start_index;
        tmp_stop_value_1 = Py_None;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_selected_pattern == NULL);
        var_selected_pattern = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_match_partial);
        tmp_called_value_1 = var_match_partial;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 252;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_selected_pattern);
        tmp_args_element_value_2 = var_selected_pattern;
        frame_1e82958c679c817a02be10382dff50c7->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_arg_counts == NULL);
        var_arg_counts = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = (PyObject *)&PyZip_Type;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_arg_counts);
        tmp_args_element_value_4 = var_arg_counts;
        frame_1e82958c679c817a02be10382dff50c7->m_frame.f_lineno = 256;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooccccc";
                exception_lineno = 256;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooccccc";
            exception_lineno = 256;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooccccc";
            exception_lineno = 256;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooccccc";
                    exception_lineno = 256;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooccccc";
            exception_lineno = 256;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_9;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_arg_count;
            var_arg_count = tmp_assign_source_10;
            Py_INCREF(var_arg_count);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_action);
        tmp_args_element_value_5 = var_action;
        frame_1e82958c679c817a02be10382dff50c7->m_frame.f_lineno = 257;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 256;
        type_description_1 = "oooooooccccc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_4 = (PyObject *)&PyZip_Type;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 258;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_arg_counts);
        tmp_args_element_value_7 = var_arg_counts;
        frame_1e82958c679c817a02be10382dff50c7->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_11;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_12 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooccccc";
                exception_lineno = 258;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooccccc";
            exception_lineno = 258;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooccccc";
            exception_lineno = 258;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooccccc";
                    exception_lineno = 258;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[24];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooccccc";
            exception_lineno = 258;
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_action;
            var_action = tmp_assign_source_16;
            Py_INCREF(var_action);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_arg_count;
            var_arg_count = tmp_assign_source_17;
            Py_INCREF(var_arg_count);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        if (par_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }

        tmp_start_value_2 = par_start_index;
        if (par_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }

        tmp_add_expr_left_1 = par_start_index;
        CHECK_OBJECT(var_arg_count);
        tmp_add_expr_right_1 = var_arg_count;
        tmp_stop_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_stop_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        Py_DECREF(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (par_start_index == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }

        tmp_iadd_expr_left_1 = par_start_index;
        CHECK_OBJECT(var_arg_count);
        tmp_iadd_expr_right_1 = var_arg_count;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
        tmp_assign_source_19 = tmp_iadd_expr_left_1;
        par_start_index = tmp_assign_source_19;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_args);
        tmp_len_arg_1 = var_args;
        tmp_ass_subvalue_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 261;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_action);
        tmp_ass_subscript_1 = var_action;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 262;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }

        tmp_called_value_5 = Nuitka_Cell_GET(self->m_closure[4]);
        CHECK_OBJECT(var_action);
        tmp_args_element_value_8 = var_action;
        CHECK_OBJECT(var_args);
        tmp_args_element_value_9 = var_args;
        frame_1e82958c679c817a02be10382dff50c7->m_frame.f_lineno = 262;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooccccc";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 258;
        type_description_1 = "oooooooccccc";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_3;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_stop_value_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_arg_counts);
        tmp_len_arg_2 = var_arg_counts;
        tmp_start_value_3 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_start_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_3 = Py_None;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        Py_DECREF(tmp_start_value_3);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_ass_subscript_2 = mod_consts[93];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooccccc";
            goto frame_exception_exit_1;
        }
    }
    if (par_start_index == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 267;
        type_description_1 = "oooooooccccc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_start_index;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e82958c679c817a02be10382dff50c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e82958c679c817a02be10382dff50c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e82958c679c817a02be10382dff50c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e82958c679c817a02be10382dff50c7,
        type_description_1,
        par_start_index,
        var_match_partial,
        var_selected_pattern,
        var_arg_counts,
        var_action,
        var_arg_count,
        var_args,
        self->m_closure[3],
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_1e82958c679c817a02be10382dff50c7 == cache_frame_1e82958c679c817a02be10382dff50c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e82958c679c817a02be10382dff50c7);
        cache_frame_1e82958c679c817a02be10382dff50c7 = NULL;
    }

    assertFrameObject(frame_1e82958c679c817a02be10382dff50c7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_start_index);
    par_start_index = NULL;
    CHECK_OBJECT(var_match_partial);
    Py_DECREF(var_match_partial);
    var_match_partial = NULL;
    CHECK_OBJECT(var_selected_pattern);
    Py_DECREF(var_selected_pattern);
    var_selected_pattern = NULL;
    CHECK_OBJECT(var_arg_counts);
    Py_DECREF(var_arg_counts);
    var_arg_counts = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_arg_count);
    var_arg_count = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_start_index);
    par_start_index = NULL;
    Py_XDECREF(var_match_partial);
    var_match_partial = NULL;
    Py_XDECREF(var_selected_pattern);
    var_selected_pattern = NULL;
    Py_XDECREF(var_arg_counts);
    var_arg_counts = NULL;
    Py_XDECREF(var_action);
    var_action = NULL;
    Py_XDECREF(var_arg_count);
    var_arg_count = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__1_action_is_satisfied() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__1_action_is_satisfied,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_46b49f55a4313417382b24adf2e6afbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__2_action_is_open() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__2_action_is_open,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c7bf4387f88015319ef10d758dfdf13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__3_action_is_greedy(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__3_action_is_greedy,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_84ee76a51b20ef4bf3244bfad1d5c646,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__4__parse_known_args,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_ad4511cfa9413a466843119d0a9bce92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__1_take_action(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__1_take_action,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_3b841b726105f2bf74e0af17e7e0c711,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__2_consume_optional(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__2_consume_optional,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_fcb2f16696fa15bf2331a114e20d463c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__3_consume_positionals(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__3_consume_positionals,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_1e82958c679c817a02be10382dff50c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_argcomplete$packages$_argparse,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_argcomplete$packages$_argparse[] = {
    impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__1_take_action,
    impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__2_consume_optional,
    impl_argcomplete$packages$_argparse$$$function__4__parse_known_args$$$function__3_consume_positionals,
    impl_argcomplete$packages$_argparse$$$function__1_action_is_satisfied,
    impl_argcomplete$packages$_argparse$$$function__2_action_is_open,
    impl_argcomplete$packages$_argparse$$$function__3_action_is_greedy,
    impl_argcomplete$packages$_argparse$$$function__4__parse_known_args,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_argcomplete$packages$_argparse;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_argcomplete$packages$_argparse) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_argcomplete$packages$_argparse[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_argcomplete$packages$_argparse,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_argcomplete$packages$_argparse(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("argcomplete.packages._argparse");

    // Store the module for future use.
    module_argcomplete$packages$_argparse = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("argcomplete.packages._argparse: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("argcomplete.packages._argparse: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("argcomplete.packages._argparse: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initargcomplete$packages$_argparse\n");

    moduledict_argcomplete$packages$_argparse = MODULE_DICT(module_argcomplete$packages$_argparse);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_argcomplete$packages$_argparse,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_argcomplete$packages$_argparse,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[40]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_argcomplete$packages$_argparse,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_argcomplete$packages$_argparse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_argcomplete$packages$_argparse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_argcomplete$packages$_argparse);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_argcomplete$packages$_argparse);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_f48bda14cbb115b3f0aa290f984d7ee0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7d0cc20e679f914a5703a7a00e3c94e1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_2);
    }
    frame_f48bda14cbb115b3f0aa290f984d7ee0 = MAKE_MODULE_FRAME(codeobj_f48bda14cbb115b3f0aa290f984d7ee0, module_argcomplete$packages$_argparse);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f48bda14cbb115b3f0aa290f984d7ee0);
    assert(Py_REFCNT(frame_f48bda14cbb115b3f0aa290f984d7ee0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[97], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[98], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[101];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_argcomplete$packages$_argparse;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[102];
        tmp_level_value_1 = mod_consts[2];
        frame_f48bda14cbb115b3f0aa290f984d7ee0->m_frame.f_lineno = 8;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[7],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[7]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[4],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[4]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[9],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[9]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[6],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[6]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[65],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[65]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[5],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[5]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[103],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[103]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[72],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[72]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[104],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[104]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[61],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[61]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[73],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[73]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_16);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_argcomplete$packages$_argparse;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[105];
        tmp_level_value_2 = mod_consts[2];
        frame_f48bda14cbb115b3f0aa290f984d7ee0->m_frame.f_lineno = 21;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[56],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_18 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_18);
        tmp_import_from_2__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[106],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[106]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[107],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[107]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[108],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[108]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_argcomplete$packages$_argparse,
                mod_consts[109],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[109]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_22);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_23);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[0];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__1_action_is_satisfied();

        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__2_action_is_open();

        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[110];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_26 = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__3_action_is_greedy(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[112]);
        tmp_condition_result_1 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[112]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        tmp_tuple_element_3 = mod_consts[113];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f48bda14cbb115b3f0aa290f984d7ee0->m_frame.f_lineno = 73;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[114]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[115];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[116];
        tmp_getattr_default_1 = mod_consts[117];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[116]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 73;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[118];
        tmp_res = PyObject_SetItem(locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73, mod_consts[94], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto try_except_handler_5;
        }
        frame_7d0cc20e679f914a5703a7a00e3c94e1_2 = MAKE_CLASS_FRAME(codeobj_7d0cc20e679f914a5703a7a00e3c94e1, module_argcomplete$packages$_argparse, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7d0cc20e679f914a5703a7a00e3c94e1_2);
        assert(Py_REFCNT(frame_7d0cc20e679f914a5703a7a00e3c94e1_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_argcomplete$packages$_argparse$$$function__4__parse_known_args();

        tmp_res = PyObject_SetItem(locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73, mod_consts[122], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7d0cc20e679f914a5703a7a00e3c94e1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7d0cc20e679f914a5703a7a00e3c94e1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7d0cc20e679f914a5703a7a00e3c94e1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7d0cc20e679f914a5703a7a00e3c94e1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_7d0cc20e679f914a5703a7a00e3c94e1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[113];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f48bda14cbb115b3f0aa290f984d7ee0->m_frame.f_lineno = 73;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_33;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_32 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73);
        locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73 = NULL;
        goto try_return_handler_4;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73);
        locals_argcomplete$packages$_argparse$$$class__1_IntrospectiveArgumentParser_73 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 73;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_32);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f48bda14cbb115b3f0aa290f984d7ee0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f48bda14cbb115b3f0aa290f984d7ee0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f48bda14cbb115b3f0aa290f984d7ee0, exception_lineno);
    }



    assertFrameObject(frame_f48bda14cbb115b3f0aa290f984d7ee0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("argcomplete.packages._argparse", false);

    Py_INCREF(module_argcomplete$packages$_argparse);
    return module_argcomplete$packages$_argparse;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_argcomplete$packages$_argparse, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("argcomplete$packages$_argparse", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
