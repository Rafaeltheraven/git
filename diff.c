static int diff_compaction_heuristic; /* experimental */
		DIFF_OPT_SET(options, SUBMODULE_LOG);
		DIFF_OPT_CLR(options, SUBMODULE_LOG);
	if (!strcmp(var, "diff.compactionheuristic")) {
		diff_compaction_heuristic = git_config_bool(var, value);
		return 0;
	}
	char hex[GIT_SHA1_HEXSZ + 1];
		width = term_columns() - options->output_prefix_length;
	qsort(dir.files, dir.nr, sizeof(dir.files[0]), dirstat_compare);
	qsort(dir.files, dir.nr, sizeof(dir.files[0]), dirstat_compare);
	if (DIFF_OPT_TST(o, SUBMODULE_LOG) &&
			(!one->mode || S_ISGITLINK(one->mode)) &&
			(!two->mode || S_ISGITLINK(two->mode))) {
				one->oid.hash, two->oid.hash,
	diff_set_mnemonic_prefix(o, "a/", "b/");
	if (DIFF_OPT_TST(o, REVERSE_DIFF)) {
		a_prefix = o->b_prefix;
		b_prefix = o->a_prefix;
	} else {
		a_prefix = o->a_prefix;
		b_prefix = o->b_prefix;
	}

	if (hashcmp(sha1, ce->sha1) || !S_ISREG(ce->ce_mode))
		if (size_only)
				sha1_to_hex_r(temp->hex, one->oid.hash);
		strbuf_addf(msg, "%s%sindex %s..", line_prefix, set,
			    find_unique_abbrev(one->oid.hash, abbrev));
		strbuf_add_unique_abbrev(msg, two->oid.hash, abbrev);
	options->ws_error_highlight = WSEH_NEW;
	if (diff_compaction_heuristic)
		DIFF_XDL_SET(options, COMPACTION_HEURISTIC);
		die("--name-only, --name-status, --check and -s are mutually exclusive");
	if (options->abbrev <= 0 || 40 < options->abbrev)
				die("Option '--stat-width' requires a value");
				die("Option '--stat-name-width' requires a value");
				die("Option '--stat-graph-width' requires a value");
				die("Option '--stat-count' requires a value");
static int parse_one_token(const char **arg, const char *token)
	const char *rest;
	if (skip_prefix(*arg, token, &rest) && (!*rest || *rest == ',')) {
		*arg = rest;
		return 1;
	}
	return 0;
}
static int parse_ws_error_highlight(struct diff_options *opt, const char *arg)
{
	const char *orig_arg = arg;
	unsigned val = 0;
	while (*arg) {
		if (parse_one_token(&arg, "none"))
			val = 0;
		else if (parse_one_token(&arg, "default"))
			val = WSEH_NEW;
		else if (parse_one_token(&arg, "all"))
			val = WSEH_NEW | WSEH_OLD | WSEH_CONTEXT;
		else if (parse_one_token(&arg, "new"))
			val |= WSEH_NEW;
		else if (parse_one_token(&arg, "old"))
			val |= WSEH_OLD;
		else if (parse_one_token(&arg, "context"))
			val |= WSEH_CONTEXT;
		else {
			error("unknown value after ws-error-highlight=%.*s",
			      (int)(arg - orig_arg), orig_arg);
			return 0;
		}
		if (*arg)
			arg++;
	else if (!strcmp(arg, "--compaction-heuristic"))
		DIFF_XDL_SET(options, COMPACTION_HEURISTIC);
	else if (!strcmp(arg, "--no-compaction-heuristic"))
		DIFF_XDL_CLR(options, COMPACTION_HEURISTIC);
		DIFF_OPT_SET(options, SUBMODULE_LOG);
		return parse_ws_error_highlight(options, arg);
		const char *path = prefix_filename(prefix, strlen(prefix), optarg);
		options->orderfile = xstrdup(path);
		const char *path = prefix_filename(prefix, strlen(prefix), optarg);
/*
 * This is different from find_unique_abbrev() in that
 * it stuffs the result with dots for alignment.
 */
const char *diff_unique_abbrev(const unsigned char *sha1, int len)
	if (len == 40)
		return sha1_to_hex(sha1);
	abbrev = find_unique_abbrev(sha1, len);
	if (abblen < 37) {
		static char hex[41];
	return sha1_to_hex(sha1);
			diff_unique_abbrev(p->one->oid.hash, opt->abbrev));
			diff_unique_abbrev(p->two->oid.hash, opt->abbrev));
	char buffer[PATH_MAX * 4 + 20];
		if (p->one->mode == 0)
			len1 = snprintf(buffer, sizeof(buffer),
					"diff--gita/%.*sb/%.*s"
					"newfilemode%06o"
					"---/dev/null"
					"+++b/%.*s",
					len1, p->one->path,
					len2, p->two->path,
					p->two->mode,
					len2, p->two->path);
		else if (p->two->mode == 0)
			len1 = snprintf(buffer, sizeof(buffer),
					"diff--gita/%.*sb/%.*s"
					"deletedfilemode%06o"
					"---a/%.*s"
					"+++/dev/null",
					len1, p->one->path,
					len2, p->two->path,
					p->one->mode,
					len1, p->one->path);
		else
			len1 = snprintf(buffer, sizeof(buffer),
					"diff--gita/%.*sb/%.*s"
					"---a/%.*s"
					"+++b/%.*s",
					len1, p->one->path,
					len2, p->two->path,
					len1, p->one->path,
					len2, p->two->path);
		git_SHA1_Update(&ctx, buffer, len1);
"inexact rename detection was skipped due to too many files.";
"only found copies from modified paths due to too many files.";
"you may want to set your %s variable to at least "
"%d and retry the command.";
		warning(degrade_cc_to_c_warning);
		warning(rename_limit_warning);
		warning(rename_limit_advice, varname, needed);
	qsort(q->queue, q->nr, sizeof(q->queue[0]), diffnamecmp);
		unsigned tmp;
		const unsigned char *tmp_c;
		tmp = old_mode; old_mode = new_mode; new_mode = tmp;
		tmp_c = old_sha1; old_sha1 = new_sha1; new_sha1 = tmp_c;
		tmp = old_sha1_valid; old_sha1_valid = new_sha1_valid;
			new_sha1_valid = tmp;
		tmp = old_dirty_submodule; old_dirty_submodule = new_dirty_submodule;
			new_dirty_submodule = tmp;