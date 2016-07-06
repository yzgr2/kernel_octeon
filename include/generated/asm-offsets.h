#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */

/* MIPS pt_regs offsets. */
#define PT_R0 0 /* offsetof(struct pt_regs, regs[0])	 # */
#define PT_R1 8 /* offsetof(struct pt_regs, regs[1])	 # */
#define PT_R2 16 /* offsetof(struct pt_regs, regs[2])	 # */
#define PT_R3 24 /* offsetof(struct pt_regs, regs[3])	 # */
#define PT_R4 32 /* offsetof(struct pt_regs, regs[4])	 # */
#define PT_R5 40 /* offsetof(struct pt_regs, regs[5])	 # */
#define PT_R6 48 /* offsetof(struct pt_regs, regs[6])	 # */
#define PT_R7 56 /* offsetof(struct pt_regs, regs[7])	 # */
#define PT_R8 64 /* offsetof(struct pt_regs, regs[8])	 # */
#define PT_R9 72 /* offsetof(struct pt_regs, regs[9])	 # */
#define PT_R10 80 /* offsetof(struct pt_regs, regs[10])	 # */
#define PT_R11 88 /* offsetof(struct pt_regs, regs[11])	 # */
#define PT_R12 96 /* offsetof(struct pt_regs, regs[12])	 # */
#define PT_R13 104 /* offsetof(struct pt_regs, regs[13])	 # */
#define PT_R14 112 /* offsetof(struct pt_regs, regs[14])	 # */
#define PT_R15 120 /* offsetof(struct pt_regs, regs[15])	 # */
#define PT_R16 128 /* offsetof(struct pt_regs, regs[16])	 # */
#define PT_R17 136 /* offsetof(struct pt_regs, regs[17])	 # */
#define PT_R18 144 /* offsetof(struct pt_regs, regs[18])	 # */
#define PT_R19 152 /* offsetof(struct pt_regs, regs[19])	 # */
#define PT_R20 160 /* offsetof(struct pt_regs, regs[20])	 # */
#define PT_R21 168 /* offsetof(struct pt_regs, regs[21])	 # */
#define PT_R22 176 /* offsetof(struct pt_regs, regs[22])	 # */
#define PT_R23 184 /* offsetof(struct pt_regs, regs[23])	 # */
#define PT_R24 192 /* offsetof(struct pt_regs, regs[24])	 # */
#define PT_R25 200 /* offsetof(struct pt_regs, regs[25])	 # */
#define PT_R26 208 /* offsetof(struct pt_regs, regs[26])	 # */
#define PT_R27 216 /* offsetof(struct pt_regs, regs[27])	 # */
#define PT_R28 224 /* offsetof(struct pt_regs, regs[28])	 # */
#define PT_R29 232 /* offsetof(struct pt_regs, regs[29])	 # */
#define PT_R30 240 /* offsetof(struct pt_regs, regs[30])	 # */
#define PT_R31 248 /* offsetof(struct pt_regs, regs[31])	 # */
#define PT_LO 272 /* offsetof(struct pt_regs, lo)	 # */
#define PT_HI 264 /* offsetof(struct pt_regs, hi)	 # */
#define PT_EPC 296 /* offsetof(struct pt_regs, cp0_epc)	 # */
#define PT_BVADDR 280 /* offsetof(struct pt_regs, cp0_badvaddr)	 # */
#define PT_STATUS 256 /* offsetof(struct pt_regs, cp0_status)	 # */
#define PT_CAUSE 288 /* offsetof(struct pt_regs, cp0_cause)	 # */
#define PT_MPL 304 /* offsetof(struct pt_regs, mpl)	 # */
#define PT_MTP 352 /* offsetof(struct pt_regs, mtp)	 # */
#define PT_SIZE 400 /* sizeof(struct pt_regs)	 # */

/* MIPS task_struct offsets. */
#define TASK_STATE 0 /* offsetof(struct task_struct, state)	 # */
#define TASK_THREAD_INFO 16 /* offsetof(struct task_struct, stack)	 # */
#define TASK_FLAGS 28 /* offsetof(struct task_struct, flags)	 # */
#define TASK_MM 312 /* offsetof(struct task_struct, mm)	 # */
#define TASK_PID 372 /* offsetof(struct task_struct, pid)	 # */
#define TASK_STRUCT_SIZE 2440 /* sizeof(struct task_struct)	 # */

/* MIPS thread_info offsets. */
#define TI_TASK 0 /* offsetof(struct thread_info, task)	 # */
#define TI_EXEC_DOMAIN 8 /* offsetof(struct thread_info, exec_domain)	 # */
#define TI_FLAGS 16 /* offsetof(struct thread_info, flags)	 # */
#define TI_TP_VALUE 24 /* offsetof(struct thread_info, tp_value)	 # */
#define TI_CPU 32 /* offsetof(struct thread_info, cpu)	 # */
#define TI_PRE_COUNT 36 /* offsetof(struct thread_info, preempt_count)	 # */
#define TI_ADDR_LIMIT 40 /* offsetof(struct thread_info, addr_limit)	 # */
#define TI_RESTART_BLOCK 48 /* offsetof(struct thread_info, restart_block)	 # */
#define TI_REGS 96 /* offsetof(struct thread_info, regs)	 # */
#define _THREAD_SIZE 16384 /* THREAD_SIZE	 # */
#define _THREAD_MASK 16383 /* THREAD_MASK	 # */

/* MIPS specific thread_struct offsets. */
#define THREAD_REG16 824 /* offsetof(struct task_struct, thread.reg16)	 # */
#define THREAD_REG17 832 /* offsetof(struct task_struct, thread.reg17)	 # */
#define THREAD_REG18 840 /* offsetof(struct task_struct, thread.reg18)	 # */
#define THREAD_REG19 848 /* offsetof(struct task_struct, thread.reg19)	 # */
#define THREAD_REG20 856 /* offsetof(struct task_struct, thread.reg20)	 # */
#define THREAD_REG21 864 /* offsetof(struct task_struct, thread.reg21)	 # */
#define THREAD_REG22 872 /* offsetof(struct task_struct, thread.reg22)	 # */
#define THREAD_REG23 880 /* offsetof(struct task_struct, thread.reg23)	 # */
#define THREAD_REG29 888 /* offsetof(struct task_struct, thread.reg29)	 # */
#define THREAD_REG30 896 /* offsetof(struct task_struct, thread.reg30)	 # */
#define THREAD_REG31 904 /* offsetof(struct task_struct, thread.reg31)	 # */
#define THREAD_STATUS 912 /* offsetof(struct task_struct, thread.cp0_status)	 # */
#define THREAD_FPU 920 /* offsetof(struct task_struct, thread.fpu)	 # */
#define THREAD_BVADDR 1256 /* offsetof(struct task_struct, thread.cp0_badvaddr)	 # */
#define THREAD_BUADDR 1264 /* offsetof(struct task_struct, thread.cp0_baduaddr)	 # */
#define THREAD_ECODE 1272 /* offsetof(struct task_struct, thread.error_code)	 # */

#define THREAD_FPR0 920 /* offsetof(struct task_struct, thread.fpu.fpr[0])	 # */
#define THREAD_FPR1 928 /* offsetof(struct task_struct, thread.fpu.fpr[1])	 # */
#define THREAD_FPR2 936 /* offsetof(struct task_struct, thread.fpu.fpr[2])	 # */
#define THREAD_FPR3 944 /* offsetof(struct task_struct, thread.fpu.fpr[3])	 # */
#define THREAD_FPR4 952 /* offsetof(struct task_struct, thread.fpu.fpr[4])	 # */
#define THREAD_FPR5 960 /* offsetof(struct task_struct, thread.fpu.fpr[5])	 # */
#define THREAD_FPR6 968 /* offsetof(struct task_struct, thread.fpu.fpr[6])	 # */
#define THREAD_FPR7 976 /* offsetof(struct task_struct, thread.fpu.fpr[7])	 # */
#define THREAD_FPR8 984 /* offsetof(struct task_struct, thread.fpu.fpr[8])	 # */
#define THREAD_FPR9 992 /* offsetof(struct task_struct, thread.fpu.fpr[9])	 # */
#define THREAD_FPR10 1000 /* offsetof(struct task_struct, thread.fpu.fpr[10])	 # */
#define THREAD_FPR11 1008 /* offsetof(struct task_struct, thread.fpu.fpr[11])	 # */
#define THREAD_FPR12 1016 /* offsetof(struct task_struct, thread.fpu.fpr[12])	 # */
#define THREAD_FPR13 1024 /* offsetof(struct task_struct, thread.fpu.fpr[13])	 # */
#define THREAD_FPR14 1032 /* offsetof(struct task_struct, thread.fpu.fpr[14])	 # */
#define THREAD_FPR15 1040 /* offsetof(struct task_struct, thread.fpu.fpr[15])	 # */
#define THREAD_FPR16 1048 /* offsetof(struct task_struct, thread.fpu.fpr[16])	 # */
#define THREAD_FPR17 1056 /* offsetof(struct task_struct, thread.fpu.fpr[17])	 # */
#define THREAD_FPR18 1064 /* offsetof(struct task_struct, thread.fpu.fpr[18])	 # */
#define THREAD_FPR19 1072 /* offsetof(struct task_struct, thread.fpu.fpr[19])	 # */
#define THREAD_FPR20 1080 /* offsetof(struct task_struct, thread.fpu.fpr[20])	 # */
#define THREAD_FPR21 1088 /* offsetof(struct task_struct, thread.fpu.fpr[21])	 # */
#define THREAD_FPR22 1096 /* offsetof(struct task_struct, thread.fpu.fpr[22])	 # */
#define THREAD_FPR23 1104 /* offsetof(struct task_struct, thread.fpu.fpr[23])	 # */
#define THREAD_FPR24 1112 /* offsetof(struct task_struct, thread.fpu.fpr[24])	 # */
#define THREAD_FPR25 1120 /* offsetof(struct task_struct, thread.fpu.fpr[25])	 # */
#define THREAD_FPR26 1128 /* offsetof(struct task_struct, thread.fpu.fpr[26])	 # */
#define THREAD_FPR27 1136 /* offsetof(struct task_struct, thread.fpu.fpr[27])	 # */
#define THREAD_FPR28 1144 /* offsetof(struct task_struct, thread.fpu.fpr[28])	 # */
#define THREAD_FPR29 1152 /* offsetof(struct task_struct, thread.fpu.fpr[29])	 # */
#define THREAD_FPR30 1160 /* offsetof(struct task_struct, thread.fpu.fpr[30])	 # */
#define THREAD_FPR31 1168 /* offsetof(struct task_struct, thread.fpu.fpr[31])	 # */
#define THREAD_FCR31 1176 /* offsetof(struct task_struct, thread.fpu.fcr31)	 # */

/* Size of struct page */
#define STRUCT_PAGE_SIZE 56 /* sizeof(struct page)	 # */

/* Linux mm_struct offsets. */
#define MM_USERS 96 /* offsetof(struct mm_struct, mm_users)	 # */
#define MM_PGD 88 /* offsetof(struct mm_struct, pgd)	 # */
#define MM_CONTEXT 680 /* offsetof(struct mm_struct, context)	 # */

#define _PGD_T_SIZE 8 /* sizeof(pgd_t)	 # */
#define _PMD_T_SIZE 8 /* sizeof(pmd_t)	 # */
#define _PTE_T_SIZE 8 /* sizeof(pte_t)	 # */

#define _PGD_T_LOG2 3 /* PGD_T_LOG2	 # */
#define _PMD_T_LOG2 3 /* PMD_T_LOG2	 # */
#define _PTE_T_LOG2 3 /* PTE_T_LOG2	 # */

#define _PGD_ORDER 1 /* PGD_ORDER	 # */
#define _PMD_ORDER 0 /* PMD_ORDER	 # */
#define _PTE_ORDER 0 /* PTE_ORDER	 # */

#define _PMD_SHIFT 21 /* PMD_SHIFT	 # */
#define _PGDIR_SHIFT 30 /* PGDIR_SHIFT	 # */

#define _PTRS_PER_PGD 1024 /* PTRS_PER_PGD	 # */
#define _PTRS_PER_PMD 512 /* PTRS_PER_PMD	 # */
#define _PTRS_PER_PTE 512 /* PTRS_PER_PTE	 # */

#define _PAGE_SHIFT 12 /* PAGE_SHIFT	 # */
#define _PAGE_SIZE 4096 /* PAGE_SIZE	 # */

/* Linux sigcontext offsets. */
#define SC_REGS 0 /* offsetof(struct sigcontext, sc_regs)	 # */
#define SC_FPREGS 256 /* offsetof(struct sigcontext, sc_fpregs)	 # */
#define SC_MDHI 512 /* offsetof(struct sigcontext, sc_mdhi)	 # */
#define SC_MDLO 544 /* offsetof(struct sigcontext, sc_mdlo)	 # */
#define SC_PC 576 /* offsetof(struct sigcontext, sc_pc)	 # */
#define SC_FPC_CSR 584 /* offsetof(struct sigcontext, sc_fpc_csr)	 # */

/* Linux 32-bit sigcontext offsets. */
#define SC32_FPREGS 272 /* offsetof(struct sigcontext32, sc_fpregs)	 # */
#define SC32_FPC_CSR 532 /* offsetof(struct sigcontext32, sc_fpc_csr)	 # */
#define SC32_FPC_EIR 536 /* offsetof(struct sigcontext32, sc_fpc_eir)	 # */

/* Linux signal numbers. */
#define _SIGHUP 1 /* SIGHUP	 # */
#define _SIGINT 2 /* SIGINT	 # */
#define _SIGQUIT 3 /* SIGQUIT	 # */
#define _SIGILL 4 /* SIGILL	 # */
#define _SIGTRAP 5 /* SIGTRAP	 # */
#define _SIGIOT 6 /* SIGIOT	 # */
#define _SIGABRT 6 /* SIGABRT	 # */
#define _SIGEMT 7 /* SIGEMT	 # */
#define _SIGFPE 8 /* SIGFPE	 # */
#define _SIGKILL 9 /* SIGKILL	 # */
#define _SIGBUS 10 /* SIGBUS	 # */
#define _SIGSEGV 11 /* SIGSEGV	 # */
#define _SIGSYS 12 /* SIGSYS	 # */
#define _SIGPIPE 13 /* SIGPIPE	 # */
#define _SIGALRM 14 /* SIGALRM	 # */
#define _SIGTERM 15 /* SIGTERM	 # */
#define _SIGUSR1 16 /* SIGUSR1	 # */
#define _SIGUSR2 17 /* SIGUSR2	 # */
#define _SIGCHLD 18 /* SIGCHLD	 # */
#define _SIGPWR 19 /* SIGPWR	 # */
#define _SIGWINCH 20 /* SIGWINCH	 # */
#define _SIGURG 21 /* SIGURG	 # */
#define _SIGIO 22 /* SIGIO	 # */
#define _SIGSTOP 23 /* SIGSTOP	 # */
#define _SIGTSTP 24 /* SIGTSTP	 # */
#define _SIGCONT 25 /* SIGCONT	 # */
#define _SIGTTIN 26 /* SIGTTIN	 # */
#define _SIGTTOU 27 /* SIGTTOU	 # */
#define _SIGVTALRM 28 /* SIGVTALRM	 # */
#define _SIGPROF 29 /* SIGPROF	 # */
#define _SIGXCPU 30 /* SIGXCPU	 # */
#define _SIGXFSZ 31 /* SIGXFSZ	 # */

/* Octeon specific octeon_cop2_state offsets. */
#define OCTEON_CP2_CRC_IV 0 /* offsetof(struct octeon_cop2_state, cop2_crc_iv)	 # */
#define OCTEON_CP2_CRC_LENGTH 8 /* offsetof(struct octeon_cop2_state, cop2_crc_length)	 # */
#define OCTEON_CP2_CRC_POLY 16 /* offsetof(struct octeon_cop2_state, cop2_crc_poly)	 # */
#define OCTEON_CP2_LLM_DAT 24 /* offsetof(struct octeon_cop2_state, cop2_llm_dat)	 # */
#define OCTEON_CP2_3DES_IV 40 /* offsetof(struct octeon_cop2_state, cop2_3des_iv)	 # */
#define OCTEON_CP2_3DES_KEY 48 /* offsetof(struct octeon_cop2_state, cop2_3des_key)	 # */
#define OCTEON_CP2_3DES_RESULT 72 /* offsetof(struct octeon_cop2_state, cop2_3des_result)	 # */
#define OCTEON_CP2_AES_INP0 80 /* offsetof(struct octeon_cop2_state, cop2_aes_inp0)	 # */
#define OCTEON_CP2_AES_IV 88 /* offsetof(struct octeon_cop2_state, cop2_aes_iv)	 # */
#define OCTEON_CP2_AES_KEY 104 /* offsetof(struct octeon_cop2_state, cop2_aes_key)	 # */
#define OCTEON_CP2_AES_KEYLEN 136 /* offsetof(struct octeon_cop2_state, cop2_aes_keylen)	 # */
#define OCTEON_CP2_AES_RESULT 144 /* offsetof(struct octeon_cop2_state, cop2_aes_result)	 # */
#define OCTEON_CP2_GFM_MULT 344 /* offsetof(struct octeon_cop2_state, cop2_gfm_mult)	 # */
#define OCTEON_CP2_GFM_POLY 360 /* offsetof(struct octeon_cop2_state, cop2_gfm_poly)	 # */
#define OCTEON_CP2_GFM_RESULT 368 /* offsetof(struct octeon_cop2_state, cop2_gfm_result)	 # */
#define OCTEON_CP2_HSH_DATW 160 /* offsetof(struct octeon_cop2_state, cop2_hsh_datw)	 # */
#define OCTEON_CP2_HSH_IVW 280 /* offsetof(struct octeon_cop2_state, cop2_hsh_ivw)	 # */
#define OCTEON_CP2_SHA3 384 /* offsetof(struct octeon_cop2_state, cop2_sha3)	 # */
#define THREAD_CP2 1280 /* offsetof(struct task_struct, thread.cp2)	 # */
#define THREAD_CVMSEG 1680 /* offsetof(struct task_struct, thread.cvmseg.cvmseg)	 # */


#endif
