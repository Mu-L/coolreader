// clang-format off

// This file is autogenerated from fc-lang database.
// https://www.freedesktop.org/wiki/Software/fontconfig/
// https://gitlab.freedesktop.org/fontconfig/fontconfig/-/tree/main/fc-lang
// by convert utility from https://github.com/virxkane/freetype_textdraw

const unsigned int pes_lang_orth_chars[] = {
//
// fontconfig/fc-lang/pes.orth
//
// Copyright © 2009 Roozbeh Pournader
//
// Permission to use, copy, modify, distribute, and sell this software and its
// documentation for any purpose is hereby granted without fee, provided that
// the above copyright notice appear in all copies and that both that
// copyright notice and this permission notice appear in supporting
// documentation, and that the name of the author(s) not be used in
// advertising or publicity pertaining to distribution of the software without
// specific, written prior permission.  The authors make no
// representations about the suitability of this software for any purpose.  It
// is provided "as is" without express or implied warranty.
//
// THE AUTHOR(S) DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
// INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
// EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY SPECIAL, INDIRECT OR
// CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
// DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
// TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.
//
// Western Farsi (pes)
//
//
// fontconfig/fc-lang/fa.orth
//
// Copyright © 2002 Keith Packard
// Copyright © 2009 Roozbeh Pournader
//
// Permission to use, copy, modify, distribute, and sell this software and its
// documentation for any purpose is hereby granted without fee, provided that
// the above copyright notice appear in all copies and that both that
// copyright notice and this permission notice appear in supporting
// documentation, and that the name of the author(s) not be used in
// advertising or publicity pertaining to distribution of the software without
// specific, written prior permission.  The authors make no
// representations about the suitability of this software for any purpose.  It
// is provided "as is" without express or implied warranty.
//
// THE AUTHOR(S) DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
// INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
// EVENT SHALL THE AUTHOR(S) BE LIABLE FOR ANY SPECIAL, INDIRECT OR
// CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
// DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
// TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.
//
// Persian (fa)
//
// Sources:
// * ISIRI 6219:2002, "Information Technology — Persian Information
//   Interchange and Display Mechanism, using Unicode"
// * "Dastur-e Khat-te Fārsi", Iranian Academy of Persian Language and
//   Literature, 4th printing, December 2005, ISBN 964-7531-13-3. Available
//   at http://www.persianacademy.ir/fa/das.aspx
//
// We are assuming that:
// * Most fonts that claim to support an Arabic letter actually do so;
// * Most modern text rendering software use OpenType tables, instead of
//   directly using presentation forms.
// * Some good Arabic fonts do not support codepoints for Arabic presentation
//   forms.
// Thus, we are switching to general forms of Arabic letters.
//
// General forms:
	0xf0f0ffff, 0x0621, 0x0624,	// range
	0xf0f0ffff, 0x0626, 0x0628,	// range
	0x0629, // TEH MARBUTA, implicitly considered mandatory in the official orthography
	0xf0f0ffff, 0x062a, 0x063a,	// range
	0xf0f0ffff, 0x0641, 0x0642,	// range
	0xf0f0ffff, 0x0644, 0x0648,	// range
	0x064b, // FATHATAN, considered mandatory in the official orthography
// 064b-064d // DAMMATAN and KASRATAN, considered mandatory in the official orthography, but very rare
// 064e-0650 // FATHA, DAMMA, and KASRA, not mandataroy in the official orthography
// 0651 // SHADDA, considered mandatory only for legal texts
// 0652 // SUKUN, not mandatory in the official orthography
	0x0654, // HAMZA ABOVE, considered mandatory in the official orthography
// 0656 // SUBSCRIPT ALEF, not mentioned in official orthography, but sometimes used
// 0670 // SUPERSCRIPT ALEF, not explicilty listed in the official orthography, although used in the document; not mandatory
	0x067e,
	0x0686,
	0x0698,
	0x06a9,
	0x06af,
	0x06cc,
// Presentations forms:
//fb56-fb59
//fb7a-fb7d
//fb8a-fb8b
//fb8e-fb95
//fbfc-fbff
//fe80-fe86
//fe89-fed8
//fedd-feee
//#fef5-fef8      // These four happen very rarely
//fefb-fefc
};
#define PES_LANG_ORTH_SZ	24

// clang-format on
