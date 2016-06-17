/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'kernelcache.release.n41'
*/

#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long

struct $B8B9B85B971E3DBFC31707A9282CDA9E;

/* 1 */
typedef $B8B9B85B971E3DBFC31707A9282CDA9E NDR_record_t;

/* 2 */
struct $B8B9B85B971E3DBFC31707A9282CDA9E
{
  unsigned __int8 mig_vers;
  unsigned __int8 if_vers;
  unsigned __int8 reserved1;
  unsigned __int8 mig_encoding;
  unsigned __int8 int_rep;
  unsigned __int8 char_rep;
  unsigned __int8 float_rep;
  unsigned __int8 reserved2;
};

/* 5 */
typedef unsigned int u_int32_t;

/* 4 */
typedef u_int32_t uint32_t;

/* 6 */
typedef int vm_prot_t;

/* 3 */
struct __attribute__((aligned(4))) segment_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  char segname[16];
  uint32_t vmaddr;
  uint32_t vmsize;
  uint32_t fileoff;
  uint32_t filesize;
  vm_prot_t maxprot;
  vm_prot_t initprot;
  uint32_t nsects;
  uint32_t flags;
};

/* 7 */
struct __attribute__((aligned(4))) section
{
  char sectname[16];
  char segname[16];
  uint32_t addr;
  uint32_t size;
  uint32_t offset;
  uint32_t align;
  uint32_t reloff;
  uint32_t nreloc;
  uint32_t flags;
  uint32_t reserved1;
  uint32_t reserved2;
};

/* 8 */
struct symtab_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t symoff;
  uint32_t nsyms;
  uint32_t stroff;
  uint32_t strsize;
};

/* 9 */
struct dysymtab_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t ilocalsym;
  uint32_t nlocalsym;
  uint32_t iextdefsym;
  uint32_t nextdefsym;
  uint32_t iundefsym;
  uint32_t nundefsym;
  uint32_t tocoff;
  uint32_t ntoc;
  uint32_t modtaboff;
  uint32_t nmodtab;
  uint32_t extrefsymoff;
  uint32_t nextrefsyms;
  uint32_t indirectsymoff;
  uint32_t nindirectsyms;
  uint32_t extreloff;
  uint32_t nextrel;
  uint32_t locreloff;
  uint32_t nlocrel;
};

/* 12 */
typedef unsigned __int8 u_int8_t;

/* 11 */
typedef u_int8_t uint8_t;

/* 10 */
struct uuid_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint8_t uuid[16];
};

/* 13 */
struct version_min_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t version;
  uint32_t reserved;
};

/* 14 */
struct source_version_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint64_t version;
};

/* 15 */
struct linkedit_data_command
{
  uint32_t cmd;
  uint32_t cmdsize;
  uint32_t dataoff;
  uint32_t datasize;
};

