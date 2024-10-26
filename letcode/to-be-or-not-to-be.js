/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
  return {
    toBe: (e) => {
      if (val === e) return true
      else throw "Not Equal"
    },
    notToBe: (e) => {
      if (val !== e) return true
      else throw "Equal"
    },
  }
}

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */
