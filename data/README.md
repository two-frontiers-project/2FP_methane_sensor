# Measurement files

No experimental data are included yet.

Use a run ID such as `2026-11-06_bench_01`. Create matching directories under `raw/` and `processed/` when needed. Store an accompanying completed run record with the raw export.

- `raw/<run-id>/`: unmodified SCI DAQ CSV exports, original filenames, and run notes. Never overwrite the only copy.
- `processed/<run-id>/`: derived tables and figures, with transformation notes or analysis code.

Keep units explicit. The optional `templates/measurements.csv` is a project schema, not the native logger format. Do not paste raw files into it without first checking headers, timestamps, units, and missing-value conventions. Record time zone and any manual time corrections.

Small approved CSV datasets may be committed. Check files and embedded metadata for private field locations or identifiers before publication. Store large datasets in an appropriate archive and link them from the run record.
