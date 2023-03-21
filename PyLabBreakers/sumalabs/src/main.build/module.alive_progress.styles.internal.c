/* Generated code for Python module 'alive_progress.styles.internal'
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

/* The "module_alive_progress$styles$internal" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_alive_progress$styles$internal;
PyDictObject *moduledict_alive_progress$styles$internal;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[195];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("alive_progress.styles.internal"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 195; i++) {
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
void checkModuleConstants_alive_progress$styles$internal(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 195; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cf3aedad59ba72047d69d03b6e903899;
static PyCodeObject *codeobj_35f1540eabcb31103d34348c58c390f3;
static PyCodeObject *codeobj_4cf3d904db1210cda5055f88467a71e1;
static PyCodeObject *codeobj_14f856dba9ee59e42f65d5441daeb247;
static PyCodeObject *codeobj_941139820cc25ec5e34bc50da10f2ce5;
static PyCodeObject *codeobj_a51741e102060076371291a3087f47bd;
static PyCodeObject *codeobj_b48b4549e4e69eb17657859b22d70379;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[185]); CHECK_OBJECT(module_filename_obj);
    codeobj_cf3aedad59ba72047d69d03b6e903899 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[186], mod_consts[186], mod_consts[187], NULL, 1, 0, 0);
    codeobj_35f1540eabcb31103d34348c58c390f3 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[188], NULL, 1, 0, 0);
    codeobj_4cf3d904db1210cda5055f88467a71e1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[189], mod_consts[189], NULL, NULL, 0, 0, 0);
    codeobj_14f856dba9ee59e42f65d5441daeb247 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[180], mod_consts[180], mod_consts[190], NULL, 0, 0, 0);
    codeobj_941139820cc25ec5e34bc50da10f2ce5 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[191], NULL, 0, 0, 0);
    codeobj_a51741e102060076371291a3087f47bd = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[192], NULL, 0, 0, 0);
    codeobj_b48b4549e4e69eb17657859b22d70379 = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[193], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__1__wrap_ordered();


static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__2___create_spinners();


static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__3___create_bars();


static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__4___create_themes();


// The module function definitions.
static PyObject *impl_alive_progress$styles$internal$$$function__1__wrap_ordered(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[0];
    PyObject *par_desired = python_pars[1];
    struct Nuitka_CellObject *var_result = Nuitka_Cell_Empty();
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_b48b4549e4e69eb17657859b22d70379;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_cf3aedad59ba72047d69d03b6e903899_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_cf3aedad59ba72047d69d03b6e903899_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b48b4549e4e69eb17657859b22d70379 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b48b4549e4e69eb17657859b22d70379)) {
        Py_XDECREF(cache_frame_b48b4549e4e69eb17657859b22d70379);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b48b4549e4e69eb17657859b22d70379 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b48b4549e4e69eb17657859b22d70379 = MAKE_FUNCTION_FRAME(codeobj_b48b4549e4e69eb17657859b22d70379, module_alive_progress$styles$internal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b48b4549e4e69eb17657859b22d70379->m_type_description == NULL);
    frame_b48b4549e4e69eb17657859b22d70379 = cache_frame_b48b4549e4e69eb17657859b22d70379;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b48b4549e4e69eb17657859b22d70379);
    assert(Py_REFCNT(frame_b48b4549e4e69eb17657859b22d70379) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_context);
            tmp_expression_value_1 = par_context;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            frame_b48b4549e4e69eb17657859b22d70379->m_frame.f_lineno = 11;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_cf3aedad59ba72047d69d03b6e903899_2)) {
            Py_XDECREF(cache_frame_cf3aedad59ba72047d69d03b6e903899_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cf3aedad59ba72047d69d03b6e903899_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cf3aedad59ba72047d69d03b6e903899_2 = MAKE_FUNCTION_FRAME(codeobj_cf3aedad59ba72047d69d03b6e903899, module_alive_progress$styles$internal, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_cf3aedad59ba72047d69d03b6e903899_2->m_type_description == NULL);
        frame_cf3aedad59ba72047d69d03b6e903899_2 = cache_frame_cf3aedad59ba72047d69d03b6e903899_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cf3aedad59ba72047d69d03b6e903899_2);
        assert(Py_REFCNT(frame_cf3aedad59ba72047d69d03b6e903899_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 11;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_6 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 11;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 11;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 11;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[1];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 11;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_8;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_9;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            bool tmp_condition_result_1;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(outline_0_var_k);
            tmp_expression_value_2 = outline_0_var_k;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_cf3aedad59ba72047d69d03b6e903899_2->m_frame.f_lineno = 11;
            tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[3]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 11;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_condition_result_1 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        CHECK_OBJECT(outline_0_var_v);
        tmp_dictset_value = outline_0_var_v;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_0_var_k);
        tmp_dictset_key = outline_0_var_k;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cf3aedad59ba72047d69d03b6e903899_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cf3aedad59ba72047d69d03b6e903899_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cf3aedad59ba72047d69d03b6e903899_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cf3aedad59ba72047d69d03b6e903899_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_cf3aedad59ba72047d69d03b6e903899_2 == cache_frame_cf3aedad59ba72047d69d03b6e903899_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_cf3aedad59ba72047d69d03b6e903899_2);
            cache_frame_cf3aedad59ba72047d69d03b6e903899_2 = NULL;
        }

        assertFrameObject(frame_cf3aedad59ba72047d69d03b6e903899_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 11;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(Nuitka_Cell_GET(var_result) == NULL);
        PyCell_SET(var_result, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_desired);
        tmp_expression_value_3 = par_desired;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_b48b4549e4e69eb17657859b22d70379->m_frame.f_lineno = 12;
        tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_desired;
            assert(old != NULL);
            par_desired = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_set_arg_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_result));
        tmp_set_arg_1 = Nuitka_Cell_GET(var_result);
        tmp_cmp_expr_left_1 = PySet_New(tmp_set_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_desired);
        tmp_set_arg_2 = par_desired;
        tmp_cmp_expr_right_1 = PySet_New(tmp_set_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_set_arg_5;
        PyObject *tmp_set_arg_6;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[5];
        CHECK_OBJECT(Nuitka_Cell_GET(var_result));
        tmp_set_arg_3 = Nuitka_Cell_GET(var_result);
        tmp_sub_expr_left_1 = PySet_New(tmp_set_arg_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_desired);
        tmp_set_arg_4 = par_desired;
        tmp_sub_expr_right_1 = PySet_New(tmp_set_arg_4);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        assert(!(tmp_unicode_arg_1 == NULL));
        tmp_kw_call_arg_value_1_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_desired);
        tmp_set_arg_5 = par_desired;
        tmp_sub_expr_left_2 = PySet_New(tmp_set_arg_5);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_result));
        tmp_set_arg_6 = Nuitka_Cell_GET(var_result);
        tmp_sub_expr_right_2 = PySet_New(tmp_set_arg_6);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        assert(!(tmp_unicode_arg_2 == NULL));
        tmp_kw_call_arg_value_2_1 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 15;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_b48b4549e4e69eb17657859b22d70379->m_frame.f_lineno = 14;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_arg_value_2_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 13;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_desired);
            tmp_iter_arg_3 = par_desired;
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_1 = "ooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_11;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);
            tmp_closure_1[1] = var_result;
            Py_INCREF(tmp_closure_1[1]);

            tmp_args_element_value_1 = MAKE_GENERATOR_alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        frame_b48b4549e4e69eb17657859b22d70379->m_frame.f_lineno = 18;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b48b4549e4e69eb17657859b22d70379, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b48b4549e4e69eb17657859b22d70379->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b48b4549e4e69eb17657859b22d70379, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b48b4549e4e69eb17657859b22d70379,
        type_description_1,
        par_context,
        par_desired,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_b48b4549e4e69eb17657859b22d70379 == cache_frame_b48b4549e4e69eb17657859b22d70379) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b48b4549e4e69eb17657859b22d70379);
        cache_frame_b48b4549e4e69eb17657859b22d70379 = NULL;
    }

    assertFrameObject(frame_b48b4549e4e69eb17657859b22d70379);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_desired);
    Py_DECREF(par_desired);
    par_desired = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_desired);
    par_desired = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_context);
    Py_DECREF(par_context);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr_locals *generator_heap = (struct alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_35f1540eabcb31103d34348c58c390f3, module_alive_progress$styles$internal, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 18;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_tuple_element_1 = generator_heap->var_x;
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 18;
                generator_heap->type_description_1 = "Noc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[1]);
            CHECK_OBJECT(generator_heap->var_x);
            tmp_subscript_value_1 = generator_heap->var_x;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 18;
                generator_heap->type_description_1 = "Noc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_expression_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 18;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 18;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x,
            generator->m_closure[1]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr_context,
        module_alive_progress$styles$internal,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_35f1540eabcb31103d34348c58c390f3,
        closure,
        2,
        sizeof(struct alive_progress$styles$internal$$$function__1__wrap_ordered$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_alive_progress$styles$internal$$$function__2___create_spinners(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_classic = NULL;
    PyObject *var_stars = NULL;
    PyObject *var_twirl = NULL;
    PyObject *var_twirls = NULL;
    PyObject *var_horizontal = NULL;
    PyObject *var_vertical = NULL;
    PyObject *var_waves = NULL;
    PyObject *var_waves2 = NULL;
    PyObject *var_waves3 = NULL;
    PyObject *var_dots = NULL;
    PyObject *var_dots_waves = NULL;
    PyObject *var_dots_waves2 = NULL;
    PyObject *var__balloon = NULL;
    PyObject *var_it = NULL;
    PyObject *var_ball_belt = NULL;
    PyObject *var_balls_belt = NULL;
    PyObject *var_triangles = NULL;
    PyObject *var_brackets = NULL;
    PyObject *var_bubbles = NULL;
    PyObject *var_flowers = NULL;
    PyObject *var_elements = NULL;
    PyObject *var_loving = NULL;
    PyObject *var_notes = NULL;
    PyObject *var_notes2 = NULL;
    PyObject *var_arrow = NULL;
    PyObject *var_arrows = NULL;
    PyObject *var_arrows2 = NULL;
    PyObject *var__arrows_left = NULL;
    PyObject *var__arrows_right = NULL;
    PyObject *var_arrows_in = NULL;
    PyObject *var_arrows_out = NULL;
    PyObject *var__core = NULL;
    PyObject *var_radioactive = NULL;
    PyObject *var_boat = NULL;
    PyObject *var_fish = NULL;
    PyObject *var_fish2 = NULL;
    PyObject *var__fish_trail = NULL;
    PyObject *var__small_fishes = NULL;
    PyObject *var_fishes = NULL;
    PyObject *var_crab = NULL;
    PyObject *var__look = NULL;
    PyObject *var__alive = NULL;
    PyObject *var_frank = NULL;
    PyObject *var_wait = NULL;
    PyObject *var_wait2 = NULL;
    PyObject *var_wait3 = NULL;
    PyObject *var_pulse = NULL;
    struct Nuitka_FrameObject *frame_941139820cc25ec5e34bc50da10f2ce5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *locals_alive_progress$styles$internal$$$function__2___create_spinners = NULL;
    static struct Nuitka_FrameObject *cache_frame_941139820cc25ec5e34bc50da10f2ce5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_941139820cc25ec5e34bc50da10f2ce5)) {
        Py_XDECREF(cache_frame_941139820cc25ec5e34bc50da10f2ce5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_941139820cc25ec5e34bc50da10f2ce5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_941139820cc25ec5e34bc50da10f2ce5 = MAKE_FUNCTION_FRAME(codeobj_941139820cc25ec5e34bc50da10f2ce5, module_alive_progress$styles$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_941139820cc25ec5e34bc50da10f2ce5->m_type_description == NULL);
    frame_941139820cc25ec5e34bc50da10f2ce5 = cache_frame_941139820cc25ec5e34bc50da10f2ce5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_941139820cc25ec5e34bc50da10f2ce5);
    assert(Py_REFCNT(frame_941139820cc25ec5e34bc50da10f2ce5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 22;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[11]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_classic == NULL);
        var_classic = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 23;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[13], 0), mod_consts[14]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stars == NULL);
        var_stars = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 24;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[15]);

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_twirl == NULL);
        var_twirl = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_twirl);
        tmp_args_element_value_1 = var_twirl;
        tmp_args_element_value_2 = mod_consts[17];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_twirls == NULL);
        var_twirls = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 26;
        tmp_called_instance_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[18]);

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 26;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 26;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[21]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 26;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_horizontal == NULL);
        var_horizontal = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 27;
        tmp_called_instance_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[23]);

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 27;
        tmp_called_instance_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        Py_DECREF(tmp_called_instance_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 27;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[21]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 27;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[22], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vertical == NULL);
        var_vertical = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vertical);
        tmp_args_element_value_3 = var_vertical;
        tmp_args_element_value_4 = mod_consts[17];
        tmp_args_element_value_5 = mod_consts[24];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_waves == NULL);
        var_waves = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vertical);
        tmp_args_element_value_6 = var_vertical;
        tmp_args_element_value_7 = mod_consts[17];
        tmp_args_element_value_8 = mod_consts[25];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_waves2 == NULL);
        var_waves2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vertical);
        tmp_args_element_value_9 = var_vertical;
        tmp_args_element_value_10 = mod_consts[17];
        tmp_args_element_value_11 = mod_consts[26];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 30;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_waves3 == NULL);
        var_waves3 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 31;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[27]);

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dots == NULL);
        var_dots = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dots);
        tmp_args_element_value_12 = var_dots;
        tmp_args_element_value_13 = mod_consts[25];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 32;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dots_waves == NULL);
        var_dots_waves = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dots);
        tmp_args_element_value_14 = var_dots;
        tmp_args_element_value_15 = mod_consts[25];
        tmp_args_element_value_16 = mod_consts[24];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 33;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dots_waves2 == NULL);
        var_dots_waves2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 35;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[29], 0), mod_consts[30]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__balloon == NULL);
        var__balloon = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__balloon);
        tmp_tuple_element_1 = var__balloon;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_15;
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var__balloon);
            tmp_tuple_element_1 = var__balloon;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 39;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[32], 0), mod_consts[30]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[33]);
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 36;
        tmp_called_instance_7 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 36;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[34]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_it == NULL);
        var_it = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 43;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS4_VECTORCALL(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[35], 0), mod_consts[14]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ball_belt == NULL);
        var_ball_belt = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 44;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS4_VECTORCALL(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[36], 0), mod_consts[14]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_balls_belt == NULL);
        var_balls_belt = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 45;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[37], 0), mod_consts[14]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_triangles == NULL);
        var_triangles = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 46;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[38], 0), mod_consts[14]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_brackets == NULL);
        var_brackets = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 47;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[39], 0), mod_consts[14]);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bubbles == NULL);
        var_bubbles = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 48;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_22, mod_consts[40]);

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 48;
        tmp_called_instance_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[42], 0), mod_consts[43]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 48;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[34]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flowers == NULL);
        var_flowers = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 49;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_23, mod_consts[44]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_elements == NULL);
        var_elements = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 50;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS4_VECTORCALL(tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[45], 0), mod_consts[46]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loving == NULL);
        var_loving = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 52;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[47], 0), mod_consts[14]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 52;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[48], 0), mod_consts[49]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_notes == NULL);
        var_notes = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 53;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[50]);

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[17];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_notes2 == NULL);
        var_notes2 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 55;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_29, mod_consts[51]);

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrow == NULL);
        var_arrow = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 56;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_30, mod_consts[52]);

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrows == NULL);
        var_arrows = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 57;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[53], 0), mod_consts[14]);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrows2 == NULL);
        var_arrows2 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 58;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[55]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__arrows_left == NULL);
        var__arrows_left = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 59;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3_VECTORCALL(tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[56], 0), mod_consts[55]);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__arrows_right == NULL);
        var__arrows_right = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__arrows_right);
        tmp_args_element_value_19 = var__arrows_right;
        CHECK_OBJECT(var__arrows_left);
        tmp_args_element_value_20 = var__arrows_left;
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_34, call_args);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrows_in == NULL);
        var_arrows_in = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__arrows_left);
        tmp_args_element_value_21 = var__arrows_left;
        CHECK_OBJECT(var__arrows_right);
        tmp_args_element_value_22 = var__arrows_right;
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_35, call_args);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_arrows_out == NULL);
        var_arrows_out = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 63;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_36, mod_consts[58]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__core == NULL);
        var__core = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__arrows_left);
        tmp_args_element_value_23 = var__arrows_left;
        CHECK_OBJECT(var__core);
        tmp_args_element_value_24 = var__core;
        CHECK_OBJECT(var__arrows_right);
        tmp_args_element_value_25 = var__arrows_right;
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_37, call_args);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_radioactive == NULL);
        var_radioactive = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 66;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[60]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_boat == NULL);
        var_boat = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 68;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[14]);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fish == NULL);
        var_fish = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 69;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[14]);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fish2 == NULL);
        var_fish2 = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 70;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_41, mod_consts[63]);

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__fish_trail == NULL);
        var__fish_trail = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 71;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[64]);

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__small_fishes == NULL);
        var__small_fishes = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__small_fishes);
        tmp_args_element_value_26 = var__small_fishes;
        CHECK_OBJECT(var__fish_trail);
        tmp_args_element_value_27 = var__fish_trail;
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fishes == NULL);
        var_fishes = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 73;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[60]);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_crab == NULL);
        var_crab = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 76;
        tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[66]);

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__look == NULL);
        var__look = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 77;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_46, mod_consts[67]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__alive == NULL);
        var__alive = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var__look);
        tmp_tuple_element_2 = var__look;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var__alive);
        tmp_tuple_element_2 = var__alive;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[33]);
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 78;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_47, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_frank == NULL);
        var_frank = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 80;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[55]);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wait == NULL);
        var_wait = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 81;
        tmp_called_instance_9 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[14]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 81;
        tmp_assign_source_45 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[41]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wait2 == NULL);
        var_wait2 = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 82;
        tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[70]);

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wait3 == NULL);
        var_wait3 = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_value_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 84;
        tmp_called_instance_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_51, mod_consts[71]);

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 84;
        tmp_called_instance_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[72], 0)
        );

        Py_DECREF(tmp_called_instance_12);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 84;
        tmp_called_instance_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[73]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 84;
        tmp_assign_source_47 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[34]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pulse == NULL);
        var_pulse = tmp_assign_source_47;
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_alive_progress$styles$internal$$$function__2___create_spinners == NULL) locals_alive_progress$styles$internal$$$function__2___create_spinners = MAKE_DICT_EMPTY();
        tmp_args_element_value_28 = locals_alive_progress$styles$internal$$$function__2___create_spinners;
        Py_INCREF(tmp_args_element_value_28);
        if (var_classic != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_classic);
            value = var_classic;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[75], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[75]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_stars != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_stars);
            value = var_stars;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[76], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[76]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_twirl != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_twirl);
            value = var_twirl;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[77], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[77]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_twirls != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_twirls);
            value = var_twirls;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[78], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[78]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_horizontal != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_horizontal);
            value = var_horizontal;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[79], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[79]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_vertical != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_vertical);
            value = var_vertical;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[80], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[80]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_waves != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_waves);
            value = var_waves;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[81], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[81]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_waves2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_waves2);
            value = var_waves2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[82], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[82]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_waves3 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_waves3);
            value = var_waves3;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[83], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[83]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_dots != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_dots);
            value = var_dots;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[84], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[84]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_dots_waves != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_dots_waves);
            value = var_dots_waves;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[85], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[85]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_dots_waves2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_dots_waves2);
            value = var_dots_waves2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[86], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[86]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__balloon != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__balloon);
            value = var__balloon;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[87], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[87]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_it != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_it);
            value = var_it;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[88], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[88]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ball_belt != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ball_belt);
            value = var_ball_belt;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[89], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[89]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_balls_belt != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_balls_belt);
            value = var_balls_belt;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[90], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[90]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_triangles != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_triangles);
            value = var_triangles;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[91], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[91]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_brackets != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_brackets);
            value = var_brackets;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[92], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[92]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_bubbles != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_bubbles);
            value = var_bubbles;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[93], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[93]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_flowers != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_flowers);
            value = var_flowers;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[94], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[94]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_elements != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_elements);
            value = var_elements;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[95], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[95]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_loving != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_loving);
            value = var_loving;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[96], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[96]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_notes != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_notes);
            value = var_notes;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[97], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[97]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_notes2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_notes2);
            value = var_notes2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[98], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[98]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arrow != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arrow);
            value = var_arrow;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[99], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[99]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arrows != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arrows);
            value = var_arrows;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[100], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[100]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arrows2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arrows2);
            value = var_arrows2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[101], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[101]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__arrows_left != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__arrows_left);
            value = var__arrows_left;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[102], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[102]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__arrows_right != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__arrows_right);
            value = var__arrows_right;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[103], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[103]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arrows_in != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arrows_in);
            value = var_arrows_in;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[104], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[104]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_arrows_out != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_arrows_out);
            value = var_arrows_out;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[105], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[105]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__core != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__core);
            value = var__core;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[106], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[106]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_radioactive != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_radioactive);
            value = var_radioactive;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[107], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[107]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_boat != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_boat);
            value = var_boat;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[108], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[108]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_fish != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_fish);
            value = var_fish;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[109], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[109]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_fish2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_fish2);
            value = var_fish2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[110], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[110]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__fish_trail != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__fish_trail);
            value = var__fish_trail;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[111], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[111]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__small_fishes != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__small_fishes);
            value = var__small_fishes;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[112], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[112]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_fishes != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_fishes);
            value = var_fishes;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[113], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[113]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_crab != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_crab);
            value = var_crab;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[114], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[114]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__look != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__look);
            value = var__look;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[115], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[115]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var__alive != NULL) {
            PyObject *value;
            CHECK_OBJECT(var__alive);
            value = var__alive;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[116], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[116]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_frank != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_frank);
            value = var_frank;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[117], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[117]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_wait != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_wait);
            value = var_wait;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[118], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[118]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_wait2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_wait2);
            value = var_wait2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[119], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[119]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_wait3 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_wait3);
            value = var_wait3;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[120], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[120]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_pulse != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_pulse);
            value = var_pulse;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_28, (Nuitka_StringObject *)mod_consts[121], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_28, mod_consts[121]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        tmp_args_element_value_29 = mod_consts[122];
        frame_941139820cc25ec5e34bc50da10f2ce5->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_52, call_args);
        }

        Py_DECREF(tmp_args_element_value_28);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_941139820cc25ec5e34bc50da10f2ce5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_941139820cc25ec5e34bc50da10f2ce5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_941139820cc25ec5e34bc50da10f2ce5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_941139820cc25ec5e34bc50da10f2ce5,
        type_description_1,
        var_classic,
        var_stars,
        var_twirl,
        var_twirls,
        var_horizontal,
        var_vertical,
        var_waves,
        var_waves2,
        var_waves3,
        var_dots,
        var_dots_waves,
        var_dots_waves2,
        var__balloon,
        var_it,
        var_ball_belt,
        var_balls_belt,
        var_triangles,
        var_brackets,
        var_bubbles,
        var_flowers,
        var_elements,
        var_loving,
        var_notes,
        var_notes2,
        var_arrow,
        var_arrows,
        var_arrows2,
        var__arrows_left,
        var__arrows_right,
        var_arrows_in,
        var_arrows_out,
        var__core,
        var_radioactive,
        var_boat,
        var_fish,
        var_fish2,
        var__fish_trail,
        var__small_fishes,
        var_fishes,
        var_crab,
        var__look,
        var__alive,
        var_frank,
        var_wait,
        var_wait2,
        var_wait3,
        var_pulse
    );


    // Release cached frame if used for exception.
    if (frame_941139820cc25ec5e34bc50da10f2ce5 == cache_frame_941139820cc25ec5e34bc50da10f2ce5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_941139820cc25ec5e34bc50da10f2ce5);
        cache_frame_941139820cc25ec5e34bc50da10f2ce5 = NULL;
    }

    assertFrameObject(frame_941139820cc25ec5e34bc50da10f2ce5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_classic);
    Py_DECREF(var_classic);
    var_classic = NULL;
    CHECK_OBJECT(var_stars);
    Py_DECREF(var_stars);
    var_stars = NULL;
    CHECK_OBJECT(var_twirl);
    Py_DECREF(var_twirl);
    var_twirl = NULL;
    CHECK_OBJECT(var_twirls);
    Py_DECREF(var_twirls);
    var_twirls = NULL;
    CHECK_OBJECT(var_horizontal);
    Py_DECREF(var_horizontal);
    var_horizontal = NULL;
    CHECK_OBJECT(var_vertical);
    Py_DECREF(var_vertical);
    var_vertical = NULL;
    CHECK_OBJECT(var_waves);
    Py_DECREF(var_waves);
    var_waves = NULL;
    CHECK_OBJECT(var_waves2);
    Py_DECREF(var_waves2);
    var_waves2 = NULL;
    CHECK_OBJECT(var_waves3);
    Py_DECREF(var_waves3);
    var_waves3 = NULL;
    CHECK_OBJECT(var_dots);
    Py_DECREF(var_dots);
    var_dots = NULL;
    CHECK_OBJECT(var_dots_waves);
    Py_DECREF(var_dots_waves);
    var_dots_waves = NULL;
    CHECK_OBJECT(var_dots_waves2);
    Py_DECREF(var_dots_waves2);
    var_dots_waves2 = NULL;
    CHECK_OBJECT(var__balloon);
    Py_DECREF(var__balloon);
    var__balloon = NULL;
    CHECK_OBJECT(var_it);
    Py_DECREF(var_it);
    var_it = NULL;
    CHECK_OBJECT(var_ball_belt);
    Py_DECREF(var_ball_belt);
    var_ball_belt = NULL;
    CHECK_OBJECT(var_balls_belt);
    Py_DECREF(var_balls_belt);
    var_balls_belt = NULL;
    CHECK_OBJECT(var_triangles);
    Py_DECREF(var_triangles);
    var_triangles = NULL;
    CHECK_OBJECT(var_brackets);
    Py_DECREF(var_brackets);
    var_brackets = NULL;
    CHECK_OBJECT(var_bubbles);
    Py_DECREF(var_bubbles);
    var_bubbles = NULL;
    CHECK_OBJECT(var_flowers);
    Py_DECREF(var_flowers);
    var_flowers = NULL;
    CHECK_OBJECT(var_elements);
    Py_DECREF(var_elements);
    var_elements = NULL;
    CHECK_OBJECT(var_loving);
    Py_DECREF(var_loving);
    var_loving = NULL;
    CHECK_OBJECT(var_notes);
    Py_DECREF(var_notes);
    var_notes = NULL;
    CHECK_OBJECT(var_notes2);
    Py_DECREF(var_notes2);
    var_notes2 = NULL;
    CHECK_OBJECT(var_arrow);
    Py_DECREF(var_arrow);
    var_arrow = NULL;
    CHECK_OBJECT(var_arrows);
    Py_DECREF(var_arrows);
    var_arrows = NULL;
    CHECK_OBJECT(var_arrows2);
    Py_DECREF(var_arrows2);
    var_arrows2 = NULL;
    CHECK_OBJECT(var__arrows_left);
    Py_DECREF(var__arrows_left);
    var__arrows_left = NULL;
    CHECK_OBJECT(var__arrows_right);
    Py_DECREF(var__arrows_right);
    var__arrows_right = NULL;
    CHECK_OBJECT(var_arrows_in);
    Py_DECREF(var_arrows_in);
    var_arrows_in = NULL;
    CHECK_OBJECT(var_arrows_out);
    Py_DECREF(var_arrows_out);
    var_arrows_out = NULL;
    CHECK_OBJECT(var__core);
    Py_DECREF(var__core);
    var__core = NULL;
    CHECK_OBJECT(var_radioactive);
    Py_DECREF(var_radioactive);
    var_radioactive = NULL;
    CHECK_OBJECT(var_boat);
    Py_DECREF(var_boat);
    var_boat = NULL;
    CHECK_OBJECT(var_fish);
    Py_DECREF(var_fish);
    var_fish = NULL;
    CHECK_OBJECT(var_fish2);
    Py_DECREF(var_fish2);
    var_fish2 = NULL;
    CHECK_OBJECT(var__fish_trail);
    Py_DECREF(var__fish_trail);
    var__fish_trail = NULL;
    CHECK_OBJECT(var__small_fishes);
    Py_DECREF(var__small_fishes);
    var__small_fishes = NULL;
    CHECK_OBJECT(var_fishes);
    Py_DECREF(var_fishes);
    var_fishes = NULL;
    CHECK_OBJECT(var_crab);
    Py_DECREF(var_crab);
    var_crab = NULL;
    CHECK_OBJECT(var__look);
    Py_DECREF(var__look);
    var__look = NULL;
    CHECK_OBJECT(var__alive);
    Py_DECREF(var__alive);
    var__alive = NULL;
    CHECK_OBJECT(var_frank);
    Py_DECREF(var_frank);
    var_frank = NULL;
    CHECK_OBJECT(var_wait);
    Py_DECREF(var_wait);
    var_wait = NULL;
    CHECK_OBJECT(var_wait2);
    Py_DECREF(var_wait2);
    var_wait2 = NULL;
    CHECK_OBJECT(var_wait3);
    Py_DECREF(var_wait3);
    var_wait3 = NULL;
    CHECK_OBJECT(var_pulse);
    Py_DECREF(var_pulse);
    var_pulse = NULL;
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

    Py_XDECREF(var_classic);
    var_classic = NULL;
    Py_XDECREF(var_stars);
    var_stars = NULL;
    Py_XDECREF(var_twirl);
    var_twirl = NULL;
    Py_XDECREF(var_twirls);
    var_twirls = NULL;
    Py_XDECREF(var_horizontal);
    var_horizontal = NULL;
    Py_XDECREF(var_vertical);
    var_vertical = NULL;
    Py_XDECREF(var_waves);
    var_waves = NULL;
    Py_XDECREF(var_waves2);
    var_waves2 = NULL;
    Py_XDECREF(var_waves3);
    var_waves3 = NULL;
    Py_XDECREF(var_dots);
    var_dots = NULL;
    Py_XDECREF(var_dots_waves);
    var_dots_waves = NULL;
    Py_XDECREF(var_dots_waves2);
    var_dots_waves2 = NULL;
    Py_XDECREF(var__balloon);
    var__balloon = NULL;
    Py_XDECREF(var_it);
    var_it = NULL;
    Py_XDECREF(var_ball_belt);
    var_ball_belt = NULL;
    Py_XDECREF(var_balls_belt);
    var_balls_belt = NULL;
    Py_XDECREF(var_triangles);
    var_triangles = NULL;
    Py_XDECREF(var_brackets);
    var_brackets = NULL;
    Py_XDECREF(var_bubbles);
    var_bubbles = NULL;
    Py_XDECREF(var_flowers);
    var_flowers = NULL;
    Py_XDECREF(var_elements);
    var_elements = NULL;
    Py_XDECREF(var_loving);
    var_loving = NULL;
    Py_XDECREF(var_notes);
    var_notes = NULL;
    Py_XDECREF(var_notes2);
    var_notes2 = NULL;
    Py_XDECREF(var_arrow);
    var_arrow = NULL;
    Py_XDECREF(var_arrows);
    var_arrows = NULL;
    Py_XDECREF(var_arrows2);
    var_arrows2 = NULL;
    Py_XDECREF(var__arrows_left);
    var__arrows_left = NULL;
    Py_XDECREF(var__arrows_right);
    var__arrows_right = NULL;
    Py_XDECREF(var_arrows_in);
    var_arrows_in = NULL;
    Py_XDECREF(var_arrows_out);
    var_arrows_out = NULL;
    Py_XDECREF(var__core);
    var__core = NULL;
    Py_XDECREF(var_radioactive);
    var_radioactive = NULL;
    Py_XDECREF(var_boat);
    var_boat = NULL;
    Py_XDECREF(var_fish);
    var_fish = NULL;
    Py_XDECREF(var_fish2);
    var_fish2 = NULL;
    Py_XDECREF(var__fish_trail);
    var__fish_trail = NULL;
    Py_XDECREF(var__small_fishes);
    var__small_fishes = NULL;
    Py_XDECREF(var_fishes);
    var_fishes = NULL;
    Py_XDECREF(var_crab);
    var_crab = NULL;
    Py_XDECREF(var__look);
    var__look = NULL;
    Py_XDECREF(var__alive);
    var__alive = NULL;
    Py_XDECREF(var_frank);
    var_frank = NULL;
    Py_XDECREF(var_wait);
    var_wait = NULL;
    Py_XDECREF(var_wait2);
    var_wait2 = NULL;
    Py_XDECREF(var_wait3);
    var_wait3 = NULL;
    Py_XDECREF(var_pulse);
    var_pulse = NULL;
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
    Py_XDECREF(locals_alive_progress$styles$internal$$$function__2___create_spinners);

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_alive_progress$styles$internal$$$function__2___create_spinners);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$styles$internal$$$function__3___create_bars(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_smooth = NULL;
    PyObject *var_classic = NULL;
    PyObject *var_classic2 = NULL;
    PyObject *var_brackets = NULL;
    PyObject *var_blocks = NULL;
    PyObject *var_bubbles = NULL;
    PyObject *var_solid = NULL;
    PyObject *var_checks = NULL;
    PyObject *var_circles = NULL;
    PyObject *var_squares = NULL;
    PyObject *var_halloween = NULL;
    PyObject *var_filling = NULL;
    PyObject *var_notes = NULL;
    PyObject *var_ruler = NULL;
    PyObject *var_ruler2 = NULL;
    PyObject *var_fish = NULL;
    PyObject *var_scuba = NULL;
    struct Nuitka_FrameObject *frame_14f856dba9ee59e42f65d5441daeb247;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *locals_alive_progress$styles$internal$$$function__3___create_bars = NULL;
    static struct Nuitka_FrameObject *cache_frame_14f856dba9ee59e42f65d5441daeb247 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_14f856dba9ee59e42f65d5441daeb247)) {
        Py_XDECREF(cache_frame_14f856dba9ee59e42f65d5441daeb247);

#if _DEBUG_REFCOUNTS
        if (cache_frame_14f856dba9ee59e42f65d5441daeb247 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_14f856dba9ee59e42f65d5441daeb247 = MAKE_FUNCTION_FRAME(codeobj_14f856dba9ee59e42f65d5441daeb247, module_alive_progress$styles$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_14f856dba9ee59e42f65d5441daeb247->m_type_description == NULL);
    frame_14f856dba9ee59e42f65d5441daeb247 = cache_frame_14f856dba9ee59e42f65d5441daeb247;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_14f856dba9ee59e42f65d5441daeb247);
    assert(Py_REFCNT(frame_14f856dba9ee59e42f65d5441daeb247) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 110;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[18]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_smooth == NULL);
        var_smooth = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 111;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[124], 0), mod_consts[125]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_classic == NULL);
        var_classic = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 112;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[127]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_classic2 == NULL);
        var_classic2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 113;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[128]);

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_brackets == NULL);
        var_brackets = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 114;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[129]);

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_blocks == NULL);
        var_blocks = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 115;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[130], 0), mod_consts[131]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_bubbles == NULL);
        var_bubbles = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 116;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[132], 0), mod_consts[131]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_solid == NULL);
        var_solid = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 117;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[133]);

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_checks == NULL);
        var_checks = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 118;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[134], 0), mod_consts[135]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_circles == NULL);
        var_circles = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 119;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[135]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_squares == NULL);
        var_squares = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 120;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[137], 0), mod_consts[138]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_halloween == NULL);
        var_halloween = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 121;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[23]);

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_filling == NULL);
        var_filling = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 122;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[139], 0), mod_consts[140]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_notes == NULL);
        var_notes = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 123;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[142]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ruler == NULL);
        var_ruler = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 124;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[142]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ruler2 == NULL);
        var_ruler2 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 125;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[144], 0), mod_consts[142]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fish == NULL);
        var_fish = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 126;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[145], 0), mod_consts[142]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scuba == NULL);
        var_scuba = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (locals_alive_progress$styles$internal$$$function__3___create_bars == NULL) locals_alive_progress$styles$internal$$$function__3___create_bars = MAKE_DICT_EMPTY();
        tmp_args_element_value_1 = locals_alive_progress$styles$internal$$$function__3___create_bars;
        Py_INCREF(tmp_args_element_value_1);
        if (var_smooth != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_smooth);
            value = var_smooth;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[146], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[146]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_classic != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_classic);
            value = var_classic;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[75], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[75]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_classic2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_classic2);
            value = var_classic2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[147], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[147]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_brackets != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_brackets);
            value = var_brackets;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[92], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[92]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_blocks != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_blocks);
            value = var_blocks;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[148], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[148]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_bubbles != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_bubbles);
            value = var_bubbles;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[93], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[93]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_solid != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_solid);
            value = var_solid;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[149], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[149]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_checks != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_checks);
            value = var_checks;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[150], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[150]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_circles != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_circles);
            value = var_circles;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[151], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[151]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_squares != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_squares);
            value = var_squares;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[152], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[152]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_halloween != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_halloween);
            value = var_halloween;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[153], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[153]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_filling != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_filling);
            value = var_filling;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[154], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[154]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_notes != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_notes);
            value = var_notes;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[97], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[97]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ruler != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ruler);
            value = var_ruler;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[155], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[155]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_ruler2 != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_ruler2);
            value = var_ruler2;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[156], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[156]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_fish != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_fish);
            value = var_fish;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[109], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[109]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_scuba != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_scuba);
            value = var_scuba;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[157], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[157]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        tmp_args_element_value_2 = mod_consts[158];
        frame_14f856dba9ee59e42f65d5441daeb247->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_14f856dba9ee59e42f65d5441daeb247, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14f856dba9ee59e42f65d5441daeb247->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14f856dba9ee59e42f65d5441daeb247, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_14f856dba9ee59e42f65d5441daeb247,
        type_description_1,
        var_smooth,
        var_classic,
        var_classic2,
        var_brackets,
        var_blocks,
        var_bubbles,
        var_solid,
        var_checks,
        var_circles,
        var_squares,
        var_halloween,
        var_filling,
        var_notes,
        var_ruler,
        var_ruler2,
        var_fish,
        var_scuba
    );


    // Release cached frame if used for exception.
    if (frame_14f856dba9ee59e42f65d5441daeb247 == cache_frame_14f856dba9ee59e42f65d5441daeb247) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_14f856dba9ee59e42f65d5441daeb247);
        cache_frame_14f856dba9ee59e42f65d5441daeb247 = NULL;
    }

    assertFrameObject(frame_14f856dba9ee59e42f65d5441daeb247);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_smooth);
    Py_DECREF(var_smooth);
    var_smooth = NULL;
    CHECK_OBJECT(var_classic);
    Py_DECREF(var_classic);
    var_classic = NULL;
    CHECK_OBJECT(var_classic2);
    Py_DECREF(var_classic2);
    var_classic2 = NULL;
    CHECK_OBJECT(var_brackets);
    Py_DECREF(var_brackets);
    var_brackets = NULL;
    CHECK_OBJECT(var_blocks);
    Py_DECREF(var_blocks);
    var_blocks = NULL;
    CHECK_OBJECT(var_bubbles);
    Py_DECREF(var_bubbles);
    var_bubbles = NULL;
    CHECK_OBJECT(var_solid);
    Py_DECREF(var_solid);
    var_solid = NULL;
    CHECK_OBJECT(var_checks);
    Py_DECREF(var_checks);
    var_checks = NULL;
    CHECK_OBJECT(var_circles);
    Py_DECREF(var_circles);
    var_circles = NULL;
    CHECK_OBJECT(var_squares);
    Py_DECREF(var_squares);
    var_squares = NULL;
    CHECK_OBJECT(var_halloween);
    Py_DECREF(var_halloween);
    var_halloween = NULL;
    CHECK_OBJECT(var_filling);
    Py_DECREF(var_filling);
    var_filling = NULL;
    CHECK_OBJECT(var_notes);
    Py_DECREF(var_notes);
    var_notes = NULL;
    CHECK_OBJECT(var_ruler);
    Py_DECREF(var_ruler);
    var_ruler = NULL;
    CHECK_OBJECT(var_ruler2);
    Py_DECREF(var_ruler2);
    var_ruler2 = NULL;
    CHECK_OBJECT(var_fish);
    Py_DECREF(var_fish);
    var_fish = NULL;
    CHECK_OBJECT(var_scuba);
    Py_DECREF(var_scuba);
    var_scuba = NULL;
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

    Py_XDECREF(var_smooth);
    var_smooth = NULL;
    Py_XDECREF(var_classic);
    var_classic = NULL;
    Py_XDECREF(var_classic2);
    var_classic2 = NULL;
    Py_XDECREF(var_brackets);
    var_brackets = NULL;
    Py_XDECREF(var_blocks);
    var_blocks = NULL;
    Py_XDECREF(var_bubbles);
    var_bubbles = NULL;
    Py_XDECREF(var_solid);
    var_solid = NULL;
    Py_XDECREF(var_checks);
    var_checks = NULL;
    Py_XDECREF(var_circles);
    var_circles = NULL;
    Py_XDECREF(var_squares);
    var_squares = NULL;
    Py_XDECREF(var_halloween);
    var_halloween = NULL;
    Py_XDECREF(var_filling);
    var_filling = NULL;
    Py_XDECREF(var_notes);
    var_notes = NULL;
    Py_XDECREF(var_ruler);
    var_ruler = NULL;
    Py_XDECREF(var_ruler2);
    var_ruler2 = NULL;
    Py_XDECREF(var_fish);
    var_fish = NULL;
    Py_XDECREF(var_scuba);
    var_scuba = NULL;
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
    Py_XDECREF(locals_alive_progress$styles$internal$$$function__3___create_bars);

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_alive_progress$styles$internal$$$function__3___create_bars);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_alive_progress$styles$internal$$$function__4___create_themes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_smooth = NULL;
    PyObject *var_classic = NULL;
    PyObject *var_scuba = NULL;
    PyObject *var_musical = NULL;
    struct Nuitka_FrameObject *frame_a51741e102060076371291a3087f47bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_alive_progress$styles$internal$$$function__4___create_themes = NULL;
    static struct Nuitka_FrameObject *cache_frame_a51741e102060076371291a3087f47bd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(mod_consts[159]);
        assert(var_smooth == NULL);
        var_smooth = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = DICT_COPY(mod_consts[160]);
        assert(var_classic == NULL);
        var_classic = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = DICT_COPY(mod_consts[161]);
        assert(var_scuba == NULL);
        var_scuba = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = DICT_COPY(mod_consts[162]);
        assert(var_musical == NULL);
        var_musical = tmp_assign_source_4;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a51741e102060076371291a3087f47bd)) {
        Py_XDECREF(cache_frame_a51741e102060076371291a3087f47bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a51741e102060076371291a3087f47bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a51741e102060076371291a3087f47bd = MAKE_FUNCTION_FRAME(codeobj_a51741e102060076371291a3087f47bd, module_alive_progress$styles$internal, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a51741e102060076371291a3087f47bd->m_type_description == NULL);
    frame_a51741e102060076371291a3087f47bd = cache_frame_a51741e102060076371291a3087f47bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a51741e102060076371291a3087f47bd);
    assert(Py_REFCNT(frame_a51741e102060076371291a3087f47bd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (locals_alive_progress$styles$internal$$$function__4___create_themes == NULL) locals_alive_progress$styles$internal$$$function__4___create_themes = MAKE_DICT_EMPTY();
        tmp_args_element_value_1 = locals_alive_progress$styles$internal$$$function__4___create_themes;
        Py_INCREF(tmp_args_element_value_1);
        if (var_smooth != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_smooth);
            value = var_smooth;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[146], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[146]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_classic != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_classic);
            value = var_classic;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[75], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[75]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_scuba != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_scuba);
            value = var_scuba;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[157], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[157]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        if (var_musical != NULL) {
            PyObject *value;
            CHECK_OBJECT(var_musical);
            value = var_musical;

            UPDATE_STRING_DICT0((PyDictObject *)tmp_args_element_value_1, (Nuitka_StringObject *)mod_consts[163], value);
        } else {
            if (DICT_REMOVE_ITEM(tmp_args_element_value_1, mod_consts[163]) == false) {
                CLEAR_ERROR_OCCURRED();
            }
        }

        tmp_args_element_value_2 = mod_consts[164];
        frame_a51741e102060076371291a3087f47bd->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_a51741e102060076371291a3087f47bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a51741e102060076371291a3087f47bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a51741e102060076371291a3087f47bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a51741e102060076371291a3087f47bd,
        type_description_1,
        var_smooth,
        var_classic,
        var_scuba,
        var_musical
    );


    // Release cached frame if used for exception.
    if (frame_a51741e102060076371291a3087f47bd == cache_frame_a51741e102060076371291a3087f47bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a51741e102060076371291a3087f47bd);
        cache_frame_a51741e102060076371291a3087f47bd = NULL;
    }

    assertFrameObject(frame_a51741e102060076371291a3087f47bd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_smooth);
    Py_DECREF(var_smooth);
    var_smooth = NULL;
    CHECK_OBJECT(var_classic);
    Py_DECREF(var_classic);
    var_classic = NULL;
    CHECK_OBJECT(var_scuba);
    Py_DECREF(var_scuba);
    var_scuba = NULL;
    CHECK_OBJECT(var_musical);
    Py_DECREF(var_musical);
    var_musical = NULL;
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

    CHECK_OBJECT(var_smooth);
    Py_DECREF(var_smooth);
    var_smooth = NULL;
    CHECK_OBJECT(var_classic);
    Py_DECREF(var_classic);
    var_classic = NULL;
    CHECK_OBJECT(var_scuba);
    Py_DECREF(var_scuba);
    var_scuba = NULL;
    CHECK_OBJECT(var_musical);
    Py_DECREF(var_musical);
    var_musical = NULL;
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
    Py_XDECREF(locals_alive_progress$styles$internal$$$function__4___create_themes);

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_alive_progress$styles$internal$$$function__4___create_themes);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__1__wrap_ordered() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$styles$internal$$$function__1__wrap_ordered,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b48b4549e4e69eb17657859b22d70379,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$styles$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__2___create_spinners() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$styles$internal$$$function__2___create_spinners,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_941139820cc25ec5e34bc50da10f2ce5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$styles$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__3___create_bars() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$styles$internal$$$function__3___create_bars,
        mod_consts[180],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_14f856dba9ee59e42f65d5441daeb247,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$styles$internal,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_alive_progress$styles$internal$$$function__4___create_themes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_alive_progress$styles$internal$$$function__4___create_themes,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a51741e102060076371291a3087f47bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_alive_progress$styles$internal,
        NULL,
        NULL,
        0
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

function_impl_code functable_alive_progress$styles$internal[] = {
    impl_alive_progress$styles$internal$$$function__1__wrap_ordered,
    impl_alive_progress$styles$internal$$$function__2___create_spinners,
    impl_alive_progress$styles$internal$$$function__3___create_bars,
    impl_alive_progress$styles$internal$$$function__4___create_themes,
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

    function_impl_code *current = functable_alive_progress$styles$internal;
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

    if (offset > sizeof(functable_alive_progress$styles$internal) || offset < 0) {
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
        functable_alive_progress$styles$internal[offset],
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
        module_alive_progress$styles$internal,
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
PyObject *modulecode_alive_progress$styles$internal(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("alive_progress.styles.internal");

    // Store the module for future use.
    module_alive_progress$styles$internal = module;

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
        PRINT_STRING("alive_progress.styles.internal: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.styles.internal: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("alive_progress.styles.internal: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initalive_progress$styles$internal\n");

    moduledict_alive_progress$styles$internal = MODULE_DICT(module_alive_progress$styles$internal);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_alive_progress$styles$internal,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_alive_progress$styles$internal,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[194]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_alive_progress$styles$internal,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_alive_progress$styles$internal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_alive_progress$styles$internal,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_alive_progress$styles$internal);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_alive_progress$styles$internal);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_4cf3d904db1210cda5055f88467a71e1;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_2);
    }
    frame_4cf3d904db1210cda5055f88467a71e1 = MAKE_MODULE_FRAME(codeobj_4cf3d904db1210cda5055f88467a71e1, module_alive_progress$styles$internal);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4cf3d904db1210cda5055f88467a71e1);
    assert(Py_REFCNT(frame_4cf3d904db1210cda5055f88467a71e1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[168], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[169], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[172];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_alive_progress$styles$internal;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[173];
        tmp_level_value_1 = mod_consts[174];
        frame_4cf3d904db1210cda5055f88467a71e1->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[6],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[175];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_alive_progress$styles$internal;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[176];
        tmp_level_value_2 = mod_consts[24];
        frame_4cf3d904db1210cda5055f88467a71e1->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[123],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[123]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[177];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_alive_progress$styles$internal;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[178];
        tmp_level_value_3 = mod_consts[24];
        frame_4cf3d904db1210cda5055f88467a71e1->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[57],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[57]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[28],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[28]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[16],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[16]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[10],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[10]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[12],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[12]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_alive_progress$styles$internal,
                mod_consts[31],
                mod_consts[174]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[31]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_alive_progress$styles$internal$$$function__1__wrap_ordered();

        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_alive_progress$styles$internal$$$function__2___create_spinners();

        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_alive_progress$styles$internal$$$function__3___create_bars();

        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_alive_progress$styles$internal$$$function__4___create_themes();

        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_4cf3d904db1210cda5055f88467a71e1->m_frame.f_lineno = 144;
        tmp_assign_source_18 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        frame_4cf3d904db1210cda5055f88467a71e1->m_frame.f_lineno = 145;
        tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_4cf3d904db1210cda5055f88467a71e1->m_frame.f_lineno = 146;
        tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_20);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cf3d904db1210cda5055f88467a71e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cf3d904db1210cda5055f88467a71e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cf3d904db1210cda5055f88467a71e1, exception_lineno);
    }



    assertFrameObject(frame_4cf3d904db1210cda5055f88467a71e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("alive_progress.styles.internal", false);

    Py_INCREF(module_alive_progress$styles$internal);
    return module_alive_progress$styles$internal;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_alive_progress$styles$internal, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("alive_progress$styles$internal", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
